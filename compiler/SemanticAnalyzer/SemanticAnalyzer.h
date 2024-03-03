#ifndef SEMA_ANALYZER_H
#define SEMA_ANALYZER_H

#include <any>
#include <random>
#include <stack>
#include <string>
#include <string_view>
#include <unordered_map>

#include <CtcLangBaseVisitor.h>
#include <Symbol.h>

namespace ctc::semantic
{
    using SymbolTable = std::vector<symbol>;

    struct theTypeIdData
    {
        bool isConst{false}, isConstexpr{false};
        bool isVolatile{false};

        bool isUnsigned{false};
        linkage_specifier linkage{linkage_specifier::NONE};

        // linkage specifier NONE same as the auto linkage specifier in C/C++

        std::string type{""};
    };

    // for pointers
    struct cvQualifier
    {
        bool isConst{false}, isVolatile{false};
    };

    struct sema_error
    {
        std::string_view what;
        size_t line, pos;

        bool isWarning{false};
    };

    class SemaAnalyzer : public CtcLangBaseVisitor
    {
      private:
        std::vector<sema_error> m_error_list;
        std::unordered_map<std::string, SymbolTable> m_symbol_tables;

        std::stack<std::string> m_scopes;

        std::string m_current_scope;

        inline std::string generate_identifier(size_t len)
        {
            const std::string characters =
                "_:abcdefghijklmnopqrstuvmxyABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

            std::random_device rd;
            std::mt19937 generator(rd());
            std::uniform_int_distribution<int> distribution(0, characters.size() - 1);

            std::string randomText;
            randomText.reserve(len);

            for (int i = 0; i < len; ++i)
            {
                randomText += characters[distribution(generator)];
            }

            return randomText;
        }

        inline void throw_error(std::string_view what, size_t line = 0, size_t pos = 0)
        {
            m_error_list.push_back({what, line, pos});
        }

        inline void throw_warning(std::string_view what, size_t line = 0, size_t pos = 0)
        {
            m_error_list.push_back({what, line, pos, true});
        }

        inline void push_scope(std::string identifier)
        {
            m_scopes.push(this->m_current_scope);
            m_current_scope = identifier;
        }

        inline void pop_scope()
        {
            if (!m_scopes.empty())
            {
                m_current_scope = m_scopes.top();

                m_scopes.pop();
                return;
            }

            throw_error("You tried to close the scope without opening it");
        }

        theTypeIdData getTypeIdFromData(CtcLangParser::DeclSpecifierSeqContext *simpleType);

        theTypeIdData getTypeFromTypeContext(CtcLangParser::SimpleTypeSpecifierContext *simpleType);
        std::string inferType(CtcLangParser::DecltypeSpecifierContext *ctx);

      public:
        SemaAnalyzer()
        {
            this->push_scope("global");
        }

        std::vector<sema_error> const &GetErrorList() const;

        virtual std::any visitCompoundStatement(
            CtcLangParser::CompoundStatementContext *ctx) override;

        virtual std::any visitAliasDeclaration(
            CtcLangParser::AliasDeclarationContext *ctx) override;

//        virtual std::any visitDeclarationseq(CtcLangParser::DeclarationseqContext *ctx) override { return visitChildren(ctx); };

        virtual std::any visitSimpleDeclaration(
            CtcLangParser::SimpleDeclarationContext *ctx) override;
    };
} // namespace ctc::semantic

#endif
