cmake_minimum_required(VERSION 3.22)

project (ctc LANGUAGES CXX)

set(CMAKE_CXX_STANDART 20)

option(AGGRESSIVE_OPTIMIZE "Enable all aggressive optimizations" OFF)
option(DEBUG "Compile with debug symbols and without optimization" OFF)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/compiler-runtime/runtime/src ${CMAKE_CURRENT_SOURCE_DIR}/compiler)

if (AGGRESSIVE_OPTIMIZE)
    
    if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
        add_compile_options(-O3)

    elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
        add_compile_options(/O2)

    elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
        add_compile_options(-O3)

    endif()

endif()


if (DEBUG)

    if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
        add_compile_options(-g3 -O0)

    elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
        add_compile_options(/Zi /Od)

    elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
        add_compile_options(-g -O0)

    endif()

endif()


if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    add_compile_definitions(GCC_HOST)
    add_compile_options(-Wall -Wextra -Wpedantic)

elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
    add_compile_definitions(MSVC_HOST)
    add_compile_options(/W4)

elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    add_compile_definitions(CLANG_HOST)
    add_compile_options(-Weverything)

endif()

add_executable(ctc
    
    compiler/ctcLexer.h
    compiler/ctcLexer.cpp

    compiler/ctcBaseVisitor.h
    compiler/ctcBaseVisitor.cpp

    compiler/ctcParser.h
    compiler/ctcParser.cpp

    compiler/ctcVisitor.h
    compiler/ctcVisitor.cpp

    compiler/main.cpp
    
    compiler/Driver/CompilerDriver.h
    compiler/Driver/CompilerDriver.cpp

    compiler/Driver/CompilerOptions.h
    compiler/Driver/TranslationUnit.h   
)

target_link_libraries(ctc ${CMAKE_CURRENT_SOURCE_DIR}/${RUNTIME_PATH})
