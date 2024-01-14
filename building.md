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
mkdir bin && cd bin
cmake ..
```

4. CMake will generate the necessary files for building. Use whichever method is more convenient for you to complete the build process.

*Note: When building a project, you must have a C++ compiler that supports C++17*