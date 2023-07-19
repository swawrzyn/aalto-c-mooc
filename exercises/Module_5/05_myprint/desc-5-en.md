title: Integer printer
task_id: 05_myprint
points: 1

**Objective**: Learn variable length argument lists

Implement function **myprint** that prints a variable number of
integers to standard output stream following the format indicated by a
given format string. The function can take variable number of
arguments: **the first argument is always a (constant) format string**
(as in _printf_), but the number of other arguments depends on the
format string. Our output function is a simpler version of _printf_:
it can only print integers. _myprint_ differs from traditional
_printf_ by using character `&` as the format specifier that should be
substituted by the integer indicated at the respective position in the
argument list. Because we only output integers, this simple format
specifier will suffice.

For example, this is one valid way of calling the function:
`myprint("Number one: &, number two: &\n", 120, 1345);`

**The function should return an integer**, that indicates how many
format specifiers (and integer arguments) were included in the given
format string.

In this exercise you will get just empty C source files to fill
in. Read the above description (and _main.c_) carefully to figure out
how the function prototype should look like. You'll need to modify
both _myprint.c_ and _myprint.h_.

If your implementation works correctly, the default main function (in
_main.c_) should output the following:

<pre>
Hello!
Number: 5
Number one: 120, number two: 1345
Three numbers: 12 444 5555
I just printed 3 integers</pre>

**Hint:** As a reminder, _[strchr]_ will return pointer to the next
instance of given character from a string, and _[fputc]_ will output
one character at a time. You may or may not want to use these
functions.

[strchr]: http://linux.die.net/man/3/strchr
[fputc]: http://linux.die.net/man/3/fputc
