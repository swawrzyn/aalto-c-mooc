# 01. Introduction

Quick summary of who are behind this material:

-   Author: Pasi Sarolahti

-   Web page created using scripts by Markus Holmström

-   Acknowledgments: the TMC developers (Matti Luukkainen, Jarmo
    Isotalo, Tony Kovanen, Martin Pärtel) have been of great help in
    setting up and maintaining the TMC system. Some of the course
    material and examples are based on the earlier version of the course
    by Raimo Nikkilä. The past and present course assistants (including
    Riku Lääkkölä, Konsta Hölttä, Essi Jukkala, Tero Marttila) have
    fixed errors and otherwise improved the content and exercises.

## Foreword

This material is not intended as a complete reference about C, but just
aims to contain sufficient information to get started with C
programming. For additional and more complete information, it is
recommended that you get a book that contains additional details about
various aspects. A very commonly used reference is **\"The C Programming
Language\"** by Brian W. Kernighan and Dennis M. Ritchie (currently at
its 2nd edition). In this material we typically refer to this book by
just as \"the K&R book\".

An important part of the course (and generally, in learning C) is to do
small programming exercises that are embedded within this material. The
exercises are designed so that if you have read the text from the
beginning without jumping around, you should be able to do the exercise
with the information you have read until that point. Therefore, when you
encounter an exercise, you could stop reading and try to do the
exercise.

Doing the exercises follow roughly the following cycle (see
[Instructions](../instructions/index.html) for more details):

1.  Write some code in editor
2.  Compile the code using the Makefiles provided. If there are compile
    errors or warnings, resolve those by modifying your code, until no
    errors or warnings are produced by compiler.
3.  Execute and test the code by running src/main in exercise directory.
    If something works in unexpected way, go back to 1.
4.  Run local TMC tests (may not work in Windows). If there are
    failures, try to figure out what is wrong and go back to 1.
5.  If local tests passed, submit your code to the [TMC
    server](https://src.aalto.fi/tmc/). If those tests passed, you have
    completed the exercise. Note that the server may implement different
    tests than the local checker. If there were failures, jump back to
    1.

There will be about 70-80 exercises altogether in the course, so the
above process will become familiar to you.

**Happy hacking!**

## Introduction to C

The [wikipedia
article](http://en.wikipedia.org/wiki/C_(programming_language)) on C
language gives a succinct summary of the relevant properties of C, and
its relationship to other common programming languages.

C program consists of (usually several) functions, written on one or
more text-based source code files. These files are processed by a
compiler and linker that produce a binary executable file understood by
the underlying computer. While the text-based C programs are intended to
be portable, i.e., the same code should work in different computers, the
binary executable is specific to the architecture it was compiled for
(for example, Intel-based 64-bit Linux). When moving the program code to
a different machine, it therefore needs to be recompiled for that
machine. Also, every time you modify the source code, you will need to
recompile it. This is a significant difference to higher-level
interpreted languages, such as Python.

Building an executable from C source code happens in the following
distinct phases, in the following order:

-   **Preprocessor**: processes macros, inclusion of header files,
    conditional compile instructions, etc, to prepare the source code
    for actual compiling into binary code.

-   **Compiler**: compiles the preprocessed, text-based code into native
    binary object code. The object code still contains symbols for
    external references (for example, functions implemented in other
    libraries), and cannot be executed as such. If a C program is split
    into multiple source code files, a separate object file (with .o
    suffix) is produced from each source code file (marked with .c
    suffix).

-   **Linker**: links together the different object files and resolves
    the references, producing the actual executable that can be run in
    the system.

Typically a C compiler, such as **gcc** performs all of the above steps.
For example, typing `gcc -o exec source1.c source2.c` on a command line
shell reads source files **source1.c** and **source2.c**, executes the
above three steps on them, and produces a binary executable called
\"exec\", that can be run on the command line. However, by using
different command line options, the gcc compiler can be instructed to
perform only a selection of the above phases.

In addition to source code files with .c suffix, a C program usually
uses header files with .h suffix. These contain definitions of data
types and functions needed by the C program, and they enable using
definitions that are external to a particular source code file. A C
program takes these definitions into use with a series of **#include**
preprocessor directives that are located in the beginning of a C source
code file.

There are two kinds of header files: user-defined headers and the
headers needed for using system libraries. The #include directive format
differs a bit in these two cases (e.g., `#include "source.h"` vs.
`#include <stdio.h>`). During the first module you don\'t need to mind
about these much \-- the exercise templates contain the necessary
include statements.

There are different ways of working with the C code. You can edit the
source code files using a separate text editor such as **kate**,
**emacs** or **vi** (all installed in Aalto Linux systems), and use the
command line shell to compile and test the code. Alternatively, you can
use an Integrated Development Environment (IDE), that has an integrated
graphical user interace for editing code, compiling it, debugging it,
and so on. Using either of these alternatives are possible on this
course. See the [Instructions](instructions.html) for more details.