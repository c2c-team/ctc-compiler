# C2C Compiler

This repository contains the source code for 2cc, a compiler designed with the basic implementation of the C2C language in mind. 2cc is specifically designed for compiling programs written in the c2c programming language.

The 2cc compiler has been designed to provide high performance and efficiency while maintaining simplicity and usability. With 2cc, you can easily compile your programs written in the c2c programming language, getting executable files optimized for your target platform.

This repository also includes the с2с Standard Language Library (lib2c) and crt(crt2c) for с2с, making it a central resource for с2с development.

c2c language - https://github.com/c2c-team/c2c-draft

## Supports Platform

Below is a table of platforms and architectures for which the 2cc compiler can generate code

| Platform | x86 | x64 | ARM | ARM64 |
|----------|-----|-----|-----|-------|
| Windows  | No | No | No  | No   |
| Linux    | No | No | No | No   |
| macOS    | No  | No | No  | No    |
| Android  | No  | No  | No | No   |
| iOS      | No  | No  | No  | No   |

## Building the 2cc compiler

If you want to build a 2cc compiler from source code, here are a few steps you need to follow:

1. Install dependencies: Make sure you have all the necessary tools and libraries installed to build 2cc. In particular, [ANTLR4](https://www.antlr.org/download.html), you will need [CMake](https://cmake.org/download/), a C++ compiler that supports C++20 (like msvc, gnu-g++, llvm-clang, apple-clang), and [Git](https://git-scm.com/downloads).
*NOTE: You can see a list of all compilers that support C++20 at [cppref.com](https://en.cppreference.com/w/cpp/compiler_support#cpp20)* 

2. Clone the repository: Clone the 2cc repository to your local computer using the command:

```bash
git clone https://github.com/c2c-team/c2c-compiler
```

And see `building.md`. In it, you can build the c2c compiler step by step

## Usage/Examples
A simple example of compiling a program written in c2c using 2cc:

```bash
ctc main.2c -o main.o
```

## Contributing

Contributions are always welcome!

See `contributing.md` for ways to get started

## Authors
C2C Team
- [@lofinaf](https://github.com/Lofinaf)
- [@satankoteika](https://github.com/Satankoteika)


## License

[MIT License](https://choosealicense.com/licenses/mit/)

[![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)
