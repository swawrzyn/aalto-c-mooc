# 07. Loops

## While and do-while

The **while** statement repeats a (compound) statement as long as the
specified expression is true (i.e., has non-zero value). Below is an
example of a simple loop that repeats until the value of a is 10 (or
higher).

```c
int a = 0;  // in this case it is important to initialize the variable
while (a < 10)
    a++;
```

The termination condition is tested before executing the statement.
Therefore it is possible that the statement is never executed, if the
termination condition is false from the beginning.

As always, the statement inside while loop can be a compound statement,
as in the following:

```c
int a = 0;
while (a < 10)
{
    printf("value of a is now %d\n", a);
    a++;
}
```

If it is desired to test the termination condition after the (compound)
statement, a do-while construct can be used as follows:

```c
int a = 20;
do {
    printf("value of a is now %d\n", a);
    a++;
} while (a < 10);
```

Because in this example the initial value of \'a\' is 20, it prints one
line before the termination condition is evaluated, and the loop is
terminated.

## For

**for** is another statement for constructing loops, and can be used as
a convenient alternative to while in many cases. It takes the form

```pseudo
for (expression_1; expression_2; expression_3)
    statement
```
    

The above **for** construct could be built using **while**, in which
case an equivalent pattern would be:

```pseudo
expression_1;
while (expression_2) {
    statement
    expression_3;
}
```

**expression_1** initializes the for loop, **expression_2** is the
iteration check, and **expression_3** is the adjustment expression at
the end of the for loop. Again, any C expressions could be used in the
three places (even including function calls, etc.).

For example, the second of the above `while` examples could be written
as:

```c
int a;
for (a = 0; a < 10; a++) {
    printf("value of a is now %d\n", a);
}
```

Any of the three expressions in the for statement can be omitted.
Therefore, yet another form for the above would be

```c
int a = 0;
for ( ; a < 10; ) {
    printf("value of a is now %d\n", a);
    a++;
}
```

If the termination condition (expression_2) is omitted, it is always
considered to be true, making an endless loop, unless broken by some
other means such as using the `break` statement.

Multiple for loops can be nested, to form multidimensional loops.

C99 allows declaration of variables as part of the for-statement, in
*expression-1*.

## break and continue

The `break` statement can be used to terminate a loop before the
specified condition is evaluated. For example, the below example never
makes it to 10, but stops counting at 5:

```c
int a;
for (a = 0; a < 10; a++) {
    printf("value of a is now %d\n", a);
    if (a == 5)
        break;
}
```

The `continue` statement causes the next iteration of a loop to start
immediately. For example, the following code only shows the even numbers
(`a % 2` takes the modulo 2 out of variable a):

```c
int a;
for (a = 0; a < 10; a++) {
    if (a % 2 == 1)
        continue;
    printf("value of a is now %d\n", a);
}
```