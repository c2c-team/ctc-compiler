#ifndef COMPILER_OPTIONS_H
#define COMPILER_OPTIONS_H

#include <vector>
#include <string_view>

#define TCC_LATEST ctc

namespace ctc::driver
{
    enum class ctc_warning_level
    {
        NoWarnings,
        BaseWarnings,
        AllWarnings
    };

    enum class ctc_optimization_level
    {
        DoNotOptimize,
        BaseOptimize,
        AggressiveOptimize
    };

    enum class ctc_version
    {
        ctc // Current stable version
    };

    struct driver_options 
    {
        ctc_version language_version { ctc_version::TCC_LATEST };
        ctc_warning_level warning_level { ctc_warning_level::BaseWarnings };
        ctc_optimization_level optimization_level { ctc_optimization_level::BaseOptimize };

        std::string_view output_path {""};

        bool warningsAsErrors : 1;
        bool emitLLVM : 1;
            

        std::vector<std::string_view> predefine_values;        
        // ...        
    };
}

#endif
