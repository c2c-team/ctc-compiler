#ifndef SYMBOL_DEF_H
#define SYMBOL_DEF_H

#include <string>
#include <tuple>
#include <vector>

namespace ctc::semantic
{
    enum class access_modifier
    {
        PUBLIC,
        PROTECTED,
        PRIVATE
    };

    enum class symbol_type
    {
        INTERFACE,
        CLASS,
        FUNCTION,
        METHOD,
        NAMESPACE,
        ALIAS,
        VARIABLE
    };

    enum class linkage_specifier
    {
        NONE,
        STATIC,
        THREAD_LOCAL,
        EXTERN
    };

    class symbol
    {
      private:
        symbol_type m_type{}; // Symbol Type

        std::string m_identifier{}; // Symbol Identifier
        std::string m_scope{};      // Where that symbol

        size_t m_line{}; // Line of definition

      public:
        symbol() = default;

        symbol(symbol_type type, size_t line, std::string &identifier, std::string &scope)
            : m_type(type), m_identifier(std::move(identifier)), m_scope(std::move(scope)),
              m_line(line)
        {
        }

        // Public properties (hiding them will only lead to an overhead with Get and Set)

        std::vector<std::tuple<std::string, std::string>>
            TemplateArguments{}; // For creating instance
        std::vector<std::tuple<std::string, std::string>> FunctionArguments{};

        std::vector<std::string> BaseClasses;             // including interfaces
        std::vector<std::string> VirtualFunctionsMembers; // including virtual destructors
        std::vector<std::string>
            FunctionsMembers; // including special members, like constructors and destructors
        std::vector<std::string> Fields;

        linkage_specifier linkage_type{linkage_specifier::NONE};
        std::string externSpecifier;

        access_modifier AccessModifier{access_modifier::PUBLIC};

        bool IsOverride{false}, IsVirtual{false}, IsConstFunctionMember{false};

        std::string VariableType{}; // For function && function member case - return type
        std::string AliasFor{};

        /* For bounds check */
        bool IsArray{false};
        size_t ArrayLength{0};

        bool IsConst{false}, IsVolatile{false};
        bool IsInline{false}, IsConstexpr{false};

        // Getters (for private fields)
        symbol_type GetType() const;
        std::string GetIdentifier() const;
        std::string GetScope() const;
    };
} // namespace ctc::semantic

#endif
