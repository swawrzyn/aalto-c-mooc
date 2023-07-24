# 04. Functions

The C programs are organized in functions. A function contains a single
logical part of the program, and it can be called from other functions
of the program (or from within the function itself). Use of functions
enables reusing code: in a well designed program any particular part of
program logic only needs to be implemented once in a single function,
that is then called from other parts of the code.

Function has four main components: **name, return value, argument
declarations, and the body of the function**. Below is an example of a
simple function definition of function \'**square**\' that multiplies
argument \'**base**\' by itself and returns it as the result of the
function (lines 1-5). Below the \'**square**\' function definition there
is the main function that has three calls to the square function (lines
9-11).

```c
int square(int base)
{
    int res = base * base;
    return res;
}

int main(void)
{
    int val = square(3);
    int val2 = square(val * 2);
    int val3 = square(square(val));
    return 0;
}
```

Line 1 above starts with the data type of the function return value
(here \'**int**\') that can be one of the data types introduced above
(there are also other data types that can be used, but more about those
later). Then comes the function name, \'**square**\'. The function
arguments are listed inside parenthesis. There can be multiple arguments
separated with comma, but here we only have one parameter, \'**base**\'
that has *int* data type. Each argument must have data type and a name.
It is also possible that function does not have any arguments. In such
case `void` is used to represent an empty argument list. This is the
case with the **main** function on line 7.

After the function return value type, name, and arguments is the
definition of the function body, inside curly brackets. The
\'**square**\' function body is on lines 2 to 6, and the \'**main**\'
function body is on lines 8 to 13. As discussed earlier, the program
execution always starts from the main function, and each function body
consists of one or more statements that make the program logic.

The function arguments work like any other local variables inside the
function implementation. This can be seen in the \'**square**\' function
body, where the \'**base**\' argument is used in the expression that
multiplies the given argument by itself, and stores the result to
variable named \'**res**\'.

The result of the function is indicated by the **return** statement (on
line line 4 for the \'**square** function). When program encounters the
**return** statement, it exits the function, and returns to the point of
the code where the function was called. At the same time the value of
the expression following the return statement is passed to the caller of
the function. For example, when the **main** function calls the
\'**square**\' function for the first time on line 9, the value of
variable \'**val**\' is set based on the result of the function. In this
case it will be 9. The return statement can be in any part of the
function definition, and there can be multiple return statements in
single function definition.

The main function calls the \'**square**\' function repeatedly three
times with different parameters. As can be seen, the parameter can be
any expression, not just a constant value. In such case, the expression
is evaluated first, and when the result is known, it is passed to the
function as an argument. Because a function call can be as part of any
expression, a function call can contain another function call as a
parameter, as can be seen on line 11. In such case the inner function
result is evaluated first, and the result is passed as argument to the
outer function. In this case we happen to use the \'**square**\'
function itself as parameter. What will be the value of \'**val3**\' at
the end of the program execution?

It is important to note that the local variables declared inside a
function definition are only visible inside the function (or more
generally, inside the block statement marked with curly brackets).
Therefore variable \'**res**\' declared in function \'**square**\'
cannot be used in the main function, nor can variable \'**val**\' be
used inside the \'**square**\' function. The only way to pass
information between the functions is by using the arguments, or the
return value. (It should be noted, though, that the C language allows
declaring variables outside the functions, in which case they are
**global**, and visible to all functions. Use of global variables is
discouraged, however, unless there is a very good and well-justified
reason for that).

Function does not need to have any return value. In such case `void` is
used in place of the return type on the function definition. In such
function, the return statement does not provide any value, and can be
omitted from the function. Functions **can have several return
statements**, to force early exit from the function under some given
conditions, and in such case return statement can be useful also when
there is not return value for the function.