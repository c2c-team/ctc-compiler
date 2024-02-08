#include <cstring>
#include <fstream>
#include <iostream>
#include <string_view>
#include <vector>

#include "Driver/CompilerDriver.h"
#include "Driver/CompilerOptions.h"
#include "Driver/TranslationUnit.h"

#include "CtcLangLexer.h"
#include "CtcLangParser.h"
#include <antlr4-runtime.h>

#define COMPILER_VERSION "beta build 1.0"

#define GET_NEXT_ARGUMENT(argv, argc, pc) (pc + 1 <= static_cast<size_t>(argc) ? argv[pc++] : "a")

static ctc::driver::driver_options options;
static std::vector<ctc::driver::translation_unit> translation_units;

static const std::string_view use_message =
    "ctc compiler " COMPILER_VERSION "\nusage: ctc [--OPTIONS--] [--FILE--]"
    "\n\nfor detail information use ctc -h | ctc --help";

static const std::string_view help_message =
    "usage: ctc [--OPTIONS--] [--FILE--]"
    "\nOptions:"
    "\n\n\t Basic Options"
    "\n\t-v | --version - display current version of compiler"
    "\n\t-h | --help - display this message"
    "\n\t-D [--DEFINE--] - predefine value for all translation units. For example: -DMAX"
    "\n\t-std [--STD-VERSION--] - replacing language version by default. Possibly values: "
    "stable(current version of language). For example: -stdstable"
    "\n\t-o | --out - specify output for object file"
    "\n\t-emit-llvm - the translation is interrupted after the LLVM IR is generated, and the LLVM "
    "IR will dump to file"
    "\n\t-dump-ast - aborts the compilation after the ast build, and dumps the ast in the "
    "LISP-Like format in the output"

    "\n\n\n\t Optimizations Options"
    "\n\t-Z - disable all optimizations"
    "\n\t-Zg - enable all basic optimizations"
    "\n\t-Zf - enable all aggressive optimizations, including all basic optimizations"

    "\n\n\n\t Warnings Options"
    "\n\t-W - disable all warnings"
    "\n\t-Wg - enable all basic warnings"
    "\n\t-Wf - enable all aggressive warnings"
    "\n\t-Werror - provide warnings as errors";

static int handle_argv(const int argc, char **argv);
static int throw_error(std::string_view what, size_t pos);

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << use_message << std::endl;
        return -1;
    }

    return handle_argv(argc, argv);
}

static int handle_argv(const int argc, char **argv)
{
    for (size_t pc = 1; pc < static_cast<size_t>(argc); pc++)
    {
        if (std::strcmp(argv[pc], "-h") == 0 || std::strcmp(argv[pc], "--help") == 0)
        {
            std::cout << help_message << std::endl;
            return 0;
        }

        if (std::strcmp(argv[pc], "-v") == 0 || std::strcmp(argv[pc], "--version") == 0)
        {
            std::cout << COMPILER_VERSION << std::endl;
            return 0;
        }

        if (std::strcmp(argv[pc], "-o") == 0 || std::strcmp(argv[pc], "--out") == 0)
        {
            options.output_path = GET_NEXT_ARGUMENT(argv, argc, pc);
            continue;
        }

        if (std::strcmp(argv[pc], "-emit-llvm") == 0)
        {
            options.emitLLVM = true;
            continue;
        }

        if (std::strcmp(argv[pc], "-dump-ast") == 0)
        {
            options.dumpAst = true;
            continue;
        }

        if (std::strcmp(argv[pc], "-D") == 0)
        {
            options.predefine_values.push_back(GET_NEXT_ARGUMENT(argv, argc, pc));
            continue;
        }

        if (std::strcmp(argv[pc], "-Z") == 0)
        {
            options.optimization_level = ctc::driver::ctc_optimization_level::DoNotOptimize;
            continue;
        }

        if (std::strcmp(argv[pc], "-Zg") == 0)
        {
            options.optimization_level = ctc::driver::ctc_optimization_level::BaseOptimize;
            continue;
        }

        if (std::strcmp(argv[pc], "-Zf") == 0)
        {
            options.optimization_level = ctc::driver::ctc_optimization_level::AggressiveOptimize;
            continue;
        }

        if (std::strcmp(argv[pc], "-W") == 0)
        {
            options.warning_level = ctc::driver::ctc_warning_level::NoWarnings;
            continue;
        }

        if (std::strcmp(argv[pc], "-Wg") == 0)
        {
            options.warning_level = ctc::driver::ctc_warning_level::BaseWarnings;
            continue;
        }

        if (std::strcmp(argv[pc], "-Wf") == 0)
        {
            options.warning_level = ctc::driver::ctc_warning_level::AllWarnings;
            continue;
        }

        if (std::strcmp(argv[pc], "-Werror") == 0)
        {
            options.warningsAsErrors = true;
            continue;
        }

        std::ifstream file(argv[pc]);

        if (file.is_open())
        {
            std::string content((std::istreambuf_iterator<char>(file)),
                                std::istreambuf_iterator<char>());

            translation_units.push_back({content, argv[pc]});
            continue;
        }

        throw_error("file don`t exist", pc);
    }

    ctc::driver::driver_instance compiler(options, translation_units);
    compiler.run();

    return 0;
}

static int throw_error(std::string_view what, size_t pos)
{
    std::cerr << "Error by position: " << pos << ". " << what << std::endl;
    return -1;
}
