#include "CompilerDriver.h"

#include <fstream>
#include <iostream>

namespace ctc::driver
{
    void driver_instance::run()
    {
        for (auto &file : m_files)
        {
            antlr4::ANTLRInputStream input(file.source);

            CtcLangLexer lexer(&input);
            antlr4::CommonTokenStream tokens(&lexer);
            CtcLangParser parser(&tokens);

            ctc::CtcErrorListener errorListener;

            parser.removeErrorListeners();
            parser.addErrorListener(&errorListener);

            auto translation_unit = parser.translationUnit();

            if (m_options.dumpAst)
            {
                auto lisp_tree = translation_unit->toStringTree();

                std::ofstream out(std::string(m_options.output_path));

                if (out.is_open())
                {
                    out << lisp_tree << std::endl;
                }

                out.close();
                return;
            }

            ctc::semantic::SemaAnalyzer semanticAnalyzer;
            semanticAnalyzer.visitTranslationUnit(translation_unit);

            auto errorList = semanticAnalyzer.GetErrorList();

            for (auto &error : errorList)
            {
                if (!error.isWarning)
                {
                    std::cout << "Semantic Error!"
                              << " At line " << error.line << " and position " << error.pos
                              << "\n\t" << error.what << "\n";
                    continue;
                }

                std::cout << "Warning!"
                          << " At line " << error.line << " and position " << error.pos << "\n\t"
                          << error.what << "\n";
            }
        }
    }
} // namespace ctc::driver
