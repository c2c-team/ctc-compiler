#include "SemanticAnalyzer.h"

#include <iostream>
#include <sstream>

namespace ctc::semantic
{
    std::vector<sema_error> const &SemaAnalyzer::GetErrorList() const
    {
        return this->m_error_list;
    }

    std::string SemaAnalyzer::getTypeFromTypeContext(
        CtcLangParser::SimpleTypeSpecifierContext *simpleType)
    {
        auto ctxStart = simpleType->getStart();

        auto inLine = ctxStart->getLine();
        auto inPos = ctxStart->getCharPositionInLine();

        std::string type = "";
        std::stringstream identifierBuilder;

        if (simpleType->decltypeSpecifier() != nullptr)
            type = inferType(simpleType->decltypeSpecifier());

        if (simpleType->nestedNameSpecifier() != nullptr)
        {
            auto nestedName = simpleType->nestedNameSpecifier();
            identifierBuilder << nestedName->getText();
        }

        if (simpleType->theTypeName() != nullptr)
        {
            identifierBuilder << simpleType->theTypeName()->getText();
            type = identifierBuilder.str();

            SymbolTable &currentScopeIdentifierTable = this->m_symbol_tables[m_current_scope];
            bool exists{false};

            for (auto &symbol : currentScopeIdentifierTable)
            {
                if (symbol.GetIdentifier() == type && symbol.GetType() == symbol_type::ALIAS)
                {
                    type = symbol.AliasFor;
                    exists = true;
                }

                if (symbol.GetIdentifier() == type && (symbol.GetType() == symbol_type::INTERFACE ||
                                                       symbol.GetType() == symbol_type::CLASS))
                    exists = true;
            }

            if (!exists)
                throw_error("Unknown type", inLine, inPos);
        }

        if (simpleType->Char() != nullptr)
            type = "char";

        if (simpleType->Char16() != nullptr)
            type = "char16";

        if (simpleType->Char32() != nullptr)
            type = "char32";

        if (simpleType->Wchar() != nullptr)
            type = "wchar";

        if (simpleType->Bool() != nullptr)
            type = "bool";

        if (simpleType->Short() != nullptr)
            type = "short";

        if (simpleType->Int() != nullptr)
            type = "int";

        if (simpleType->Long() != nullptr)
            type = "long";

        if (simpleType->Float() != nullptr)
            type = "float";

        if (simpleType->Signed() != nullptr)
            type = "int";

        if (simpleType->Unsigned() != nullptr)
            type = "unsigned int";

        if (simpleType->Double() != nullptr)
            type = "double";

        if (simpleType->Void() != nullptr)
            type = "void";

        if (simpleType->Auto() != nullptr)
            type = "auto";

        return type;
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

    std::any SemaAnalyzer::visitSimpleDeclaration(CtcLangParser::SimpleDeclarationContext *ctx)
    {
        if (ctx->declSpecifierSeq() != nullptr)
        {
            auto specifierSeq = ctx->declSpecifierSeq();

            std::string type{""};

            bool needInfer{false};

            bool isConst{false}, isConstexpr{false};
            bool isVolatile{false};
            linkage_specifier linkage{linkage_specifier::NONE};

            auto ctxStart = ctx->getStart();

            auto inLine = ctxStart->getLine();
            auto inPos = ctxStart->getCharPositionInLine();

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
                    if (isConstexpr)
                    {
                        auto ctxStart = ctx->getStart();

                        auto inLine = ctxStart->getLine();
                        auto inPos = ctxStart->getCharPositionInLine();

                        throw_error("Constexpr duplication", inLine, inPos);
                    }

                    isConstexpr = true;
                }

                if (specifier->storageClassSpecifier() != nullptr)
                {
                    auto storageClassPtr = specifier->storageClassSpecifier();

                    if (linkage != linkage_specifier::NONE)
                        throw_error("Multiply definition of storage class modifier", inLine, inPos);

                    if (storageClassPtr->Static() != nullptr)
                        linkage = linkage_specifier::STATIC;

                    if (storageClassPtr->Thread_local() != nullptr)
                        linkage = linkage_specifier::THREAD_LOCAL;

                    if (storageClassPtr->Extern() != nullptr)
                        linkage = linkage_specifier::EXTERN;
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

                            if (type != "")
                                throw_error("Type redefinition", inLine, inPos);

                            type = this->getTypeFromTypeContext(simpleType);
                        }

                        if (trailingTypeSpecifier->cvQualifier() != nullptr)
                        {
                            auto ctxStart = trailingTypeSpecifier->cvQualifier()->getStart();

                            auto inLine = ctxStart->getLine();
                            auto inPos = ctxStart->getCharPositionInLine();

                            if (trailingTypeSpecifier->cvQualifier()->Const() != nullptr)
                            {
                                if (isConst)
                                    throw_error("Duplicate const", inLine, inPos);

                                isConst = true;
                            }

                            if (trailingTypeSpecifier->cvQualifier()->Volatile() != nullptr)
                            {
                                if (isVolatile)
                                    throw_error("Duplicate volatile", inLine, inPos);

                                isVolatile = true;
                            }
                        }
                    }
                }
            }

            if (type == "")
                throw_error("The declarator requires the type", inLine, inPos);

            std::cout << type;
        }

        return 0;
    }
} // namespace ctc::semantic
