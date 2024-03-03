#include "SemanticAnalyzer.h"

#include <iostream>
#include <sstream>

namespace ctc::semantic
{
    std::vector<sema_error> const &SemaAnalyzer::GetErrorList() const
    {
        return this->m_error_list;
    }

    theTypeIdData SemaAnalyzer::getTypeIdFromData(CtcLangParser::DeclSpecifierSeqContext *ctx)
    {
        theTypeIdData result;

        // for dumbs
        if (ctx != nullptr)
        {
            auto ctxStart = ctx->getStart();

            auto inLine = ctxStart->getLine();
            auto inPos = ctxStart->getCharPositionInLine();

            auto specifierSeq = ctx;

            for (auto &specifier : specifierSeq->declSpecifier())
            {
                if (specifier->functionSpecifier() != nullptr)
                    this->throw_error("Function specifier is not allowed in declarator", inLine,
                                      inPos);

                if (specifier->virtualSpecifierSeq() != nullptr)
                    this->throw_error(
                        "The use of the override and final keywords is not allowed in this case",
                        inLine, inPos);

                if (specifier->Constexpr() != nullptr)
                {
                    if (result.isConstexpr)
                    {
                        auto ctxStart = ctx->getStart();

                        auto inLine = ctxStart->getLine();
                        auto inPos = ctxStart->getCharPositionInLine();

                        throw_error("Constexpr duplication", inLine, inPos);
                    }

                    result.isConstexpr = true;
                }

                if (specifier->storageClassSpecifier() != nullptr)
                {
                    auto storageClassPtr = specifier->storageClassSpecifier();

                    if (result.linkage != linkage_specifier::NONE)
                        throw_error("Multiply definition of storage class modifier", inLine, inPos);

                    if (storageClassPtr->Static() != nullptr)
                        result.linkage = linkage_specifier::STATIC;

                    if (storageClassPtr->Thread_local() != nullptr)
                        result.linkage = linkage_specifier::THREAD_LOCAL;

                    if (storageClassPtr->Extern() != nullptr)
                        result.linkage = linkage_specifier::EXTERN;

                    if (storageClassPtr->Internal() != nullptr)
                        result.linkage = linkage_specifier::INTERNAL;
                }

                if (specifier->typeSpecifier() != nullptr)
                {
                    auto typeSpecifier = specifier->typeSpecifier();

                    if (typeSpecifier->trailingTypeSpecifier() != nullptr)
                    {
                        auto trailingTypeSpecifier = typeSpecifier->trailingTypeSpecifier();

                        if (trailingTypeSpecifier->simpleTypeSpecifier() != nullptr)
                        {
                            auto simpleType = trailingTypeSpecifier->simpleTypeSpecifier();

                            if (result.type != "")
                                throw_error("Type redefinition", inLine, inPos);

                            auto typeContext = this->getTypeFromTypeContext(simpleType);
                            
                            if (result.isUnsigned && typeContext.isUnsigned)
                                throw_error("Unsigned Duplication", inLine, inPos);

                            result.isUnsigned = typeContext.isUnsigned;

                            if (result.type == "")
                                result.type = typeContext.type;
                        }

                        if (trailingTypeSpecifier->cvQualifier() != nullptr)
                        {
                            auto ctxStart = trailingTypeSpecifier->cvQualifier()->getStart();

                            auto inLine = ctxStart->getLine();
                            auto inPos = ctxStart->getCharPositionInLine();

                            if (trailingTypeSpecifier->cvQualifier()->Const() != nullptr)
                            {
                                if (result.isConst)
                                    throw_error("Duplicate const", inLine, inPos);

                                result.isConst = true;
                            }

                            if (trailingTypeSpecifier->cvQualifier()->Volatile() != nullptr)
                            {
                                if (result.isVolatile)
                                    throw_error("Duplicate volatile", inLine, inPos);

                                result.isVolatile = true;
                            }
                        }
                    }
                }
            }

            if (result.type == "")
                throw_error("The declarator requires the type", inLine, inPos);

            if (m_current_scope != "global" && result.linkage == linkage_specifier::INTERNAL)
                throw_error("The internal modifier is not valid in here", inLine, inPos); 

            std::cout << result.type;
        }

        return result;
    }

    theTypeIdData SemaAnalyzer::getTypeFromTypeContext(
        CtcLangParser::SimpleTypeSpecifierContext *simpleType)
    {
        auto ctxStart = simpleType->getStart();

        auto inLine = ctxStart->getLine();
        auto inPos = ctxStart->getCharPositionInLine();

        theTypeIdData result;
    
        ////////////////////////////////////////////
        std::stringstream identifierBuilder;

        if (simpleType->decltypeSpecifier() != nullptr)
            result.type = inferType(simpleType->decltypeSpecifier());

        if (simpleType->nestedNameSpecifier() != nullptr)
        {
            auto nestedName = simpleType->nestedNameSpecifier();
            identifierBuilder << nestedName->getText();
        }

        if (simpleType->theTypeName() != nullptr)
        {
            identifierBuilder << simpleType->theTypeName()->getText();
            result.type = identifierBuilder.str();

            SymbolTable &currentScopeIdentifierTable = this->m_symbol_tables[m_current_scope];
            bool exists{false};

            for (auto &symbol : currentScopeIdentifierTable)
            {
                if (symbol.GetIdentifier() == result.type && symbol.GetType() == symbol_type::ALIAS)
                {
                    result.type = symbol.AliasFor;
                    exists = true;
                }

                if (symbol.GetIdentifier() == result.type && (symbol.GetType() == symbol_type::INTERFACE ||
                                                       symbol.GetType() == symbol_type::CLASS))
                    exists = true;
            }

            if (!exists)
                throw_error("Unknown type", inLine, inPos);
        }

        if (simpleType->Char() != nullptr)
            result.type = "char";

        if (simpleType->Char16() != nullptr)
            result.type = "char16";

        if (simpleType->Char32() != nullptr)
            result.type = "char32";

        if (simpleType->Wchar() != nullptr)
            result.type = "wchar";

        if (simpleType->Bool() != nullptr)
            result.type = "bool";

        if (simpleType->Short() != nullptr)
            result.type = "short";

        if (simpleType->Int() != nullptr)
            result.type = "int";

        if (simpleType->Long() != nullptr)
            result.type = "long";

        if (simpleType->Float() != nullptr)
            result.type = "float";

        if (simpleType->Signed() != nullptr)
            throw_warning("Signed type modifier is invalid for Ctc code.", inLine, inPos);

        if (simpleType->Unsigned() != nullptr)
        {
            if (result.isUnsigned)
                this->throw_error("Duplicate unsigned", inLine, inPos);

            result.isUnsigned = true;
        }

        if (simpleType->Double() != nullptr)
            result.type = "double";

        if (simpleType->Void() != nullptr)
            result.type = "void";

        if (simpleType->Auto() != nullptr)
            result.type = "auto";

        if (result.isUnsigned && result.type == "")
            result.type = "int";

        return result;
    }

    std::string SemaAnalyzer::inferType(CtcLangParser::DecltypeSpecifierContext *ctx)
    {
        if (ctx != nullptr)
        {
            if (ctx->Auto() != nullptr)
                return "auto";

            return "not implemented";
        }

        return "bad input";
    }

    std::any SemaAnalyzer::visitAliasDeclaration(CtcLangParser::AliasDeclarationContext *ctx)
    {
        auto ctxStart = ctx->getStart();

        auto inLine = ctxStart->getLine();
        auto inPos = ctxStart->getCharPositionInLine();

        auto identifier = ctx->Identifier()->getText();
        std::cout << ctx->theTypeId()->getText();

        symbol alias(symbol_type::ALIAS, inLine, identifier, m_current_scope);
        m_symbol_tables[m_current_scope].push_back(alias);
        return 0;
    }

    std::any SemaAnalyzer::visitCompoundStatement(CtcLangParser::CompoundStatementContext *ctx)
    {
        this->push_scope(generate_identifier(10));
        visitChildren(ctx);  
        this->pop_scope();

        return 0; 
    }
    
    std::any SemaAnalyzer::visitSimpleDeclaration(CtcLangParser::SimpleDeclarationContext *ctx)
    {
        size_t pointerDepth;

        std::unordered_map<size_t, cvQualifier> pointersQualifiers;

        if (ctx->declSpecifierSeq() != nullptr)
        {
            theTypeIdData typeData = this->getTypeIdFromData(ctx->declSpecifierSeq());
        }

        auto ctxStart = ctx->getStart();

        auto inLine = ctxStart->getLine();
        auto inPos = ctxStart->getCharPositionInLine();

        if (ctx->initDeclaratorList() == nullptr)
            throw_error("Except init declarator", inLine, inPos);

        auto initDeclaratorList = ctx->initDeclaratorList();

        for (auto& initDeclarator : initDeclaratorList->initDeclarator())
        {
            if (initDeclarator->declarator() == nullptr)
                return 0;

            auto declarator = initDeclarator->declarator();

            if (declarator->pointerDeclarator() != nullptr)
            {
                auto pointerDeclarator = declarator->pointerDeclarator();

                size_t pointerIndex = 0;

                for (auto& pointerOperator : pointerDeclarator->pointerOperator())
                {
                    if (pointerOperator->cvqualifierseq() != nullptr)
                    {
                        auto cvQualifiers = pointerOperator->cvqualifierseq();

                        for (auto& cv : cvQualifiers->cvQualifier())
                        {
                            if (pointersQualifiers.contains(pointerIndex))
                            {
                                auto pointerQualifier = pointersQualifiers[pointerIndex];

                                if (cv->Const() != nullptr && pointerQualifier.isConst)
                                    throw_error("Const duplication in pointer declarator", inLine, inPos);
 
                                if (cv->Volatile() != nullptr && pointerQualifier.isVolatile)
                                    throw_error("Volatile duplication in pointer declarator", inLine, inPos);
 
                                continue;     
                            }

                            pointersQualifiers.emplace(pointerIndex, cvQualifier { (cv->Const() != nullptr), (cv->Volatile() != nullptr) }); 
                        }  
                    }

                    pointerIndex++; 
                } 

                std::cout << "Indexes" << pointerIndex << "\n";
            }

            if (declarator->noPointerDeclarator() != nullptr)
            {
                
            }
                
        } 

        return 0;
    }
} // namespace ctc::semantic
