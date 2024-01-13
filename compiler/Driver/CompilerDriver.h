#ifndef DRIVER_H
#define DRIVER_H

#include <vector>
#include <string>

#include <antlr4-runtime.h>
#include <CtcLexer.h>
#include <CtcParser.h>

namespace ctc::driver
{
    struct file;
    using file_list = std::vector<file>;

    enum class ctc_warning_level
    {
        NoWarnings,
        BaseWarnings,
        AllWarnings
    };

    enum class ctc_version
    {
        ctc // Current stable version
    };

    struct file
    {
        std::string source, path;        
    };

    struct driver_options 
    {
        ctc_version language_version;
        ctc_warning_level warning_level;

        bool warningsAsErrors : 1;
        
        // ...        
    };

    class driver_instance
    {
    private:
        driver_options m_options;
        file_list m_files { };

    public:
        explicit driver_instance(driver_options options) : m_options(options)
        {}

        
    };
}

#endif
