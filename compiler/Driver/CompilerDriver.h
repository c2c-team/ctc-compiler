#ifndef DRIVER_H
#define DRIVER_H

#include <vector>

#include <CtcLangErrorListener.h>
#include <CtcLangLexer.h>
#include <CtcLangParser.h>
#include <SemanticAnalyzer.h>
#include <antlr4-runtime.h>

#include "CompilerOptions.h"
#include "TranslationUnit.h"

namespace ctc::driver
{
    class driver_instance
    {
      private:
        using file_list = std::vector<translation_unit>;

        driver_options m_options;
        file_list m_files{};

      public:
        explicit driver_instance(const driver_options &options, file_list files)
            : m_options(options), m_files(files)
        {
        }

        void run();
    };
} // namespace ctc::driver

#endif
