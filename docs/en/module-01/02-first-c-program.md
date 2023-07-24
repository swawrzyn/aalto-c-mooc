# 02. The First C Program

Below is a very simple C-program. It prints one line of text to screen
and finishes after that.

```c
#include <stdio.h>

int main(void)
{
    /* The following line will print out some text */
    printf("Hey! How are you?\n");
}
```

The first line tells that the program uses the definitions for
\"Standard I/O\" functions provided by the standard library. This header
is needed, for example, for printing text on the screen. We will look
into these functions in more detail later.

Every executable C program must have the **main function** that the
system calls when the program execution is started. In the above
example, line 3 starts the main function.

The definition of the function is included in a block enclosed with
braces (from line 3 to 7), and consists of one or (usually) more
**statements**. Each statement **ends with a semicolon**. In this
example we only have one statement on line 6, calling the **printf**
function that outputs text on screen. On line 5 there is a descriptive
comment enclosed inside `/*` and `*/` markers. Such comments can contain
any free-form text, and are intended for programmer to leave clarifying
notes for the reader of the code. Compiler ignores anything inside the
comment marks.

The \'**printf**\' function shown in the example outputs text on the
screen. It is defined in the Standard I/O library, which is why we had
to begin the program with the `#include` directive. In this example the
printf function contains one parameter (inside parenthesis), which is a
string that is written to the screen. The string ends with a newline
character (`\n`), causing the following output to be printed on the next
line. The \'**printf**\' function call, like all other C statements,
ends in semicolon (;). Forgetting the semicolon is a common mistake for
beginners that causes compilation of source code to fail.

As you might guess, the program prints *\"Hey! How are you?\"* on the
screen. You can try this program by yourself to practice the use of
compiler.

C is liberal about the formatting of the source code. The spaces or line
feeds in the code do not affect the program logic. In extreme case the
whole program could be written on a (very long) single line. However,
even though the C compiler does not care about formatting, it is
important to follow clear and consistent programming style. Otherwise
the program code is very difficult to read. Some rules of thumb for
clear style:

-   **Indent code** based on program blocks: whenever a new block of
    statements is started, indent the start of the line by a consistent
    space. Always use consistent spacing (for example 4 spaces for every
    indent, or one tab for every indent)
-   apply clear and **consistent style in naming** of variables and
    functions. They should be descriptive enough, but
    very_long_local_variable_names are usually not a good idea.
-   divide program in logical, not-very-long **functions**, instead of
    writing everything in the main function.
-   **use comments** to explain logic that might not be easy to follow
    for someone else by just reading the code.

Text editors, especially in IDEs, often try to assist the programmer in
following consistent style, for example by applying indentation
automatically (sometimes to the point of irritation, if the programmer
disagrees with the style).