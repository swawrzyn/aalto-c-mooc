# 06. Conditional Statements

## Statements and blocks

A function body consists statements that can contain expressions, and
each statement is terminated by semicolon. **Compound statement** is is
a group of statements that are separated by opening and closing braces {
and }. In terms of program structure, a compound statement itself is a
statement. Declarations that are done inside a compound statement block,
are only visible inside the block, similarly to declarations done in the
function definition (that can be seen as a top-level compound
statement). Usually compound statement blocks are used together with
control functions of the program, such as in if-conditions or loops, but
it is possible (although not very common) to use them just stand-alone.
Here is an example to illustrate this:

```c
int main(void)
{
    int a = 1;
    a = a + 1;
    {
        int b = 6;
        b = b + 1;
    }
    a = a + b; /* Error! b is not visible here anymore */
}
```

The above example causes a compiler error on line 9, because variable b
is declared inside the inner block (lines 5 - 8), and is not available
on a level above it.

## Relational and logical operators

Relational and logical operators **result in either 1 or 0**, depending
on whether the condition in the operator is true or false. The
relational operators are:

-   `<` \-- less than
-   `<=` \-- less or equal than
-   `>` \-- greater than
-   `>=` \-- greater or equal than
-   `==` \-- equal (**Important: notice the difference to assignment
    operator with one \'=\'**)
-   `!=` \-- not equal

The following example illustrates the outcome of relational operators:

```c
int main(void)
{
    int a;
    scanf("%d", &a);
    int a_res = a < 5;
    printf("a less than 5: %d\n", a_res);
    printf("a equal to 5: %d\n", a == 5);
}
```

In above example an integer value is first read to variable \'**a**\'
(the implementor has been lazy to not check the return value of the
*scanf* call). Then, variable \'**a_res**\' is set to the result of
logical operator `a < 5`, and becomes either 0 or 1, depending on what
user gave as input. Line 7 demonstrates that the relational operators
can be used in expression as any other operator, and can therefore be
used, for example as function parameters. The *printf* function will
show 1 if user had typed \'5\', otherwise it will show 0. The user input
(red) and program output (black) from above code could be for example
following:

```
5 // [!code error]
a less than 5: 0
a equal to 5: 1
```

In addition, there are logical operators for AND, OR and NOT:

-   AND operator is `&&`: for example expression `(a < 5 && b > 6)` is
    true if a is smaller than 5 AND b is greater than 6.
-   OR operator is `||`: for example `(a < 5 || b > 6)` is true if
    either a is smaller than 5 OR b is greater than 6.
-   NOT (unary) operator is `!` in front of an expression, and negates
    the outcome of the expression. For example !(a \< 5) says \"a is not
    smaller than 5\", i.e., it is greater or equal to 5.

A common mistake is to confuse && and \|\| (the logical operators) with
& and \| (bitwise operations, explained in later modules), causing a
different outcome. Similarly, it is common to confuse == (equality) with
= (assignment). Because both the assignment and bitwise operators can be
used as part of expression, the compiler accepts both forms, but use of
wrong operator leads to wrong behavior.

## If and else

The if-else structure can be used to implement decisions in the program,
as with most other programming languages. The structure is:

```pseudo
if (expression)
  statement-1
else
  statement-2
```


If \'*expression*\' is true, statement-1 is executed. If it is false,
statement-2 is executed. In C language, **any non-zero value of
expression is interpreted as true, and zero is interpreted as false**.
\"expression\" can be any C expression, and can contain a function call
or technically even just constant value (which would not make any sense
in practice). Often relational or logical operators are used here, but
they do not have to be used. For example, assuming integer variable a,
statement `if (a)` would test whether variable a contains a non-zero
value. \'*statement-1*\' and \'*statement-2*\' must either be terminated
with semicolon, or they can be compound statements indicated by curly
braces. Here is a simple example:

```c
int days, years;
scanf("%d %d", &days, &years); // return value omitted -- trust the user
if (days > 365) {
    years = years + 1;
    days = days - 365;
}
else
    printf("%d days remaining until the next year\n", 365 - days);

/* No curly braces in the else branch --
   this part of code is executed in both cases */
printf("days: %d  years: %d\n", days, years);
```

The input could be, for example, like this:

```output
400 2 // [!code error]
days: 35  years: 3
```

The above example does not use curly braces in the else - branch, which
therefore consists of only one statement. Forgetting curly braces
unintentionally could also cause buggy behavior. Therefore they are
often used for clarity even if they would contain just one statement.
The else branch is not mandatory, and can be left out, if there is no
viable alternative code to execute.

An if-else construct can have more than two parts: another `if`
statement can follow directly after `else`, and this can be repeated any
number of times, until including the final `else` in the end, which is
not mandatory. For example:

```c
int a;
scanf("%d", &a);

if (a == 1)
    printf("one\n");
else if (a == 2)
    printf("two\n");
else if (a == 3)
    printf("three\n");
else
    printf("some other number\n");
```

## Switch

The `switch` statement is another way for doing multi-way decisions,
when the options are constant integers. The switch statement compares an
expression to constant labels, and in case of matching label executes
the following code. Here is an example that reads one character from
user, and evaluates whether it is one of a few alternatives:

```c
char a;
scanf("%c", &a);

switch(a) {
case '1':
    printf("user typed one\n");
    break;

case '2':
    printf("user typed two\n");
    break;

case 'a':
case 'b':
case 'c':
    printf("user typed a, b or c\n");
    break;

default:
   printf("user typed something else\n");
   break;
}
```

Pay attention to the differences between switch construct and if-else
construct. In the case of switch, multiple statements can follow each
**case** statement without enclosing them inside compound statement
(i.e., curly brackets). Usually after the last statement of each branch
there is a `break` statement that causes the program to jump out of the
switch processing, to the code that follows the ending brace of the
whole switch statement (we will see more about `break` shortly). If
break is not included, the execution would continue through the next
labels: for example, if break was removed from branch \'1\' above, the
program would print two lines of output when user typed character \'1\'.
While this property is a common reason for bugs in C programs, it allows
assigning multiple labels for a piece of code, as is done for \'a\',
\'b\' and \'c\' above. Finally, a special label \"default\" is used to
match all cases. Usually a good habit is to include break statement also
after the final branch, even though it is logically unnecessary. This
helps avoiding bugs if program is extended later.

Remember: \'1\' is also a constant integer, based on the ASCII character
encoding table, and is equivalent to 49 in decimal format. Number 1 and
character \'1\' are different values: `printf("%c\n", '1');` outputs 1,
but `printf("%d\n", '1');` outputs 49, because the latter prints numeric
value corresponding the character constant, but former assumes character
encoding.

Note that *switch* can always be replaced with series of if..else if..
statements that perform the corresponding set of tests.