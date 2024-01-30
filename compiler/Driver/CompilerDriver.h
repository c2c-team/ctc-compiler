#ifndef DRIVER_H
#define DRIVER_H

#include <antlr4-runtime.h>

#include <vector>

#include <CtcLangLexer.h>
#include <CtcLangParser.h>

#include "TranslationUnit.h"
#include "CompilerOptions.h"

namespace ctc::driver
{
    class driver_instance
    {
    private:
        using file_list = std::vector<translation_unit>;

        driver_options m_options;
        file_list m_files { };

    public:
        explicit driver_instance(const driver_options& options) : m_options(options)
        {}

        
    };
}

#endif
