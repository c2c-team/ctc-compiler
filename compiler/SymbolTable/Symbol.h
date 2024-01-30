#ifndef SYMBOL_DEF_H
#define SYMBOL_DEF_H

#include <memory>
#include <string>

namespace ctc::semantic
{
    enum class access_modifier
    {
        PUBLIC,
        PRIVATE
    };

    enum class symbol_type
    {
        INTERFACE,
        OBJECT,
        CLASS,
        FUNCTION,
        METHOD,
        NAMESPACE,
        ALIAS,
        VARIABLE
    };

    struct symbol
    {  
        size_t definition_in_line;

        symbol_data
        symbol_type type { symbol_type::VARIABLE };         
    };
}

#endif
