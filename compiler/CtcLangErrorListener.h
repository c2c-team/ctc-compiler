#ifndef ERROR_LISTENER_H
#define ERROR_LISTENER_H

#include <antlr4-runtime.h>
#include <exception>
#include <string>

namespace ctc
{
    class CtcErrorListener : public antlr4::BaseErrorListener
    {
      public:
        CtcErrorListener() = default;

        virtual void syntaxError(antlr4::Recognizer *recognizer, antlr4::Token *offendingSymbol,
                                 size_t line, size_t charPositionInLine, const std::string &msg,
                                 std::exception_ptr e) override
        {
            std::cout << "Syntax Error! At line " << line << " and position " << charPositionInLine
                      << "\n\t" << msg << std::endl;
        }
    };
} // namespace ctc

#endif
