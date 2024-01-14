# Building the Compiler

To build the project, follow the steps below:

1. Start by building the compiler frontend. Navigate to the compiler-front directory and execute the bash script `build_frontend.sh`.

```
cd compiler-front
chmod +x build_frontend.sh
./build_frontend.sh
```

2. Once the compiler frontend is built, proceed to build the compiler runtime. Simply run `build_runtime.sh` in the main directory.

3. Finally, build the compiler.

```
mkdir cmake-bin && cd cmake-bin
cmake .. -DRUNTIME_PATH="{Enter path to compiler runtime library}"
```

4. CMake will generate the necessary files for building. Use whichever method is more convenient for you to complete the build process.

*Note: When building a project, you must have a C++ compiler that supports C++17*

# Optional parameters for CMakeLists

1. DEBUG - Compile with debug symbols and without optimization (work only for gcc, clang, msvc). Example `cmake .. -DRUNTIME_PATH="{Enter path to compiler runtime library} -DDEBUG=ON`
2. AGGRESSIVE OPTIMIZE - Enable all aggressive optimizations (work only for gcc, clang, msvc. Example `cmake .. -DRUNTIME_PATH="{Enter path to compiler runtime library} -DAGGRESSIVE_OPTIMIZE=ON`
