# 03. Data Types and Variables

In C (and many other programming languages) data is stored in
**variables**. Each variable has a name and a data type that determines
what values can be stored in the variable. C applies *static type
checking*, meaning that compliance to declared data types is checked
already at the compile time. Therefore, before a variable can be used,
**it must be declared** with an indication of its data type.

The variable names in C are case-sensitive. The name can consists of
alphabetic characters, numbers and underline (\_), but must not start
with number. These naming rules apply all different types of names in C:
functions, data types, and so on.

## Integer data types

Integers are perhaps the most common data type in C (although this
depends on the application area). There are different types of integers
in C, differing in the amount of memory space they require, and
consequently the number range they can represent. The integer data types
are the following:

-   **`char`** \-- size: 8 bits (1 byte), signed values from -127 to 127,
    unsigned values from 0 to 255.
-   **`short int`** \-- 16 bits (2 bytes), signed values from -32767 to
    32767, unsigned values from 0 to 65535
-   **`int`** \-- at least 16 bits, typically 32 bits (4 bytes), signed
    values from -(2^31^ - 1) to 2^31^ - 1, unsigned values from 0 to
    2^32^ - 1
-   **`long int`** \-- at least 32 bits, can be 64 bits (8 bytes)
-   **`long long int`** \-- 64 bits, signed values from -(2^63^ - 1) to
    2^63^ - 1, unsigned values from 0 to 2^64^ - 1

For each basic data type, a declaration can be contain `signed` and
`unsigned` keywords (before the actual type), to specify whether the
data type is intended for only positive values, or also for negative
values. If this is not specified, the default is to apply signed type,
except in the case of char, where the default behavior is implementation
dependent. Unfortunately, the basic integer types do not always have the
same range, and for example in the old implementations the size of
**int** type can be shorter than in modern implementations.

For `long int` and `short int` a shorter form of `long` and `short` can
be (and are usually) used.

Below are examples of few variable declarations. When a variable is
declared, it can be set to have an initial value, or it can be left
uninitialized. **If a variable is not initialized, its initial value is
unknown**, and results in unpredictable program behavior. Therefore it
is recommended to initialize the variable when declaring it, when
possible.

```c
int main(void)
{
    char varA = -50;
    unsigned char varB = 200;
    unsigned char varB2 = 500;  // Error, exceeds the value range
    int varC;  // ok, but initial value is unknown
    long varD = 100000;
}
```

The above example also shows another way of using comments: a single
line comment can start with two slashes (//). Such comment ends at the
end of line. Because C is liberal about formatting, we can add a comment
on the same line with other code.

One problem with the basic data types presented above is that the exact
size of the variable can differ between architectures. The C99 standard
also includes new, fixed size integer definitions that improve the
portability of programs between architectures. These are defined in the
`stdint.h` header, and are as follows:

-   **`uint8_t`, `int8_t`**: unsigned and signed 8-bit integer
-   **`uint16_t`, `int16_t`**: unsigned and signed 16-bit integer
-   **`uint32_t`, `int32_t`**: unsigned and signed 32-bit integer
-   **`uint64_t`, `int64_t`**: unsigned and signed 64-bit integer

**Constants** are fixed values defined by the programmer when writing
the code. By default integer constants assume **int data type**, i.e.,
they can represent a 32-bit value range in modern systems. Above we saw
constants -50, 200, 500 and 100000. By default constants follow the
decimal (base 10) number system, but there is a representation format
for giving octal (base 8) constants, and for giving hexadecimal (base
16) constants. Octal constants start with digit 0. Hexadecimal constants
are prefixed with `0x`. In the early parts of the course operating with
decimal numbers is sufficient, but later we take a closer look at
hexadecimal notation. Below are examples of each of these notations.

```c
short a = 012; /* set variable a to octal 012, equal to decimal 10 */
short b = -34; /* just using decimal number here */
short c = 0xffff; /* hexadecimal constant, equal to decimal 65535 */
```

## Floating point numbers

For presenting large numbers, or fractions of integers, floating point
data types can be used. Internally, a floating point number is built
from three components: the sign bit, significand, and exponent. The
number is then composed of these three parts in the following way:

number = (-1)<sup>sign \*</sup> 1.significand <sup>\*</sup> 2<sup>exponent</sup>

Because of the way how floating point numbers are stored in binary
memory, the floating point numbers cannot cover a continuous number
space. Therefore floating point calculation operations do not always
give an exactly correct results, but sometimes a value \"close\" to the
correct result comes out. In addition, typically computation with
floating point numbers is slower than with integers. Therefore integers
are often used in C, and floating point numbers are only used when the
integer value range is not sufficient. Additional details can be found
in a related [Wikipedia
article](http://en.wikipedia.org/wiki/Floating_point).

There are three floating point data types, differing in how many bits
are allocated to the above three components:

-   **`float`** \-- 32 bits (1b + 23b significant + 8b exponent)
-   **`double`** \-- 64 bits (1b + 52b significant + 11b exponent)
-   **`long double`** \-- 80 or 128 bits

The constants for floating point numbers can either use the conventional
decimal format (e.g., 1.543), or exponent format (1e-2), or combination
of both. The default data type for floating point constant is
**double**, but if the constant is suffixed by \'F\', it is assumed to
be of type **float**. For example:

```c
float d = 0.534;
double e = 2e10;
float g = 0.111F;
```

## String and character constants

String constants are included in double quotes, as we saw together with
the **printf** call in the first example. Operating with strings in C
requires understanding arrays and pointers, and therefore we defer that
to Module 2 for now.

The characters shown to user in C follow the [ASCII encoding
scheme](http://en.wikipedia.org/wiki/ASCII). There are also various
other encoding schemes, but the common property in all of them is that
each visible character has a numeric character code. For example, in
ASCII, letter \'A\' is stored similarly as decimal number 65 in the
system memory, but shown as \'A\' when printed to the screen as
character. C supports character constants to make it easier to operate
with ASCII-encoded characters. Character constants are included in
apostrophes (\'):

`int char_A = 'A';`

It is important to make distinction between string constants (\"text\")
and character constants (\'t\'), because they stand for different data
type. The character constants are of **int** type, similar to normal
integer constants, and strings are arrays of **char** variables (as will
be discussed in Module 2)

Note that constants \'1\' and 1 are different in C: \'1\' is same as
decimal number 49 according to the ASCII system, whereas 1 is just
decimal number 1, but is nothing relevant interpreted as ASCII. Both are
integers nonetheless.

## Arithmetic operators

Above we have seen cases of **assignment operator** (=) when
initializing the variables together with declaration. Assignment can
also be done separately of the declaration, and an earlier used variable
can be re-assigned \-- after the following three lines, variable **var**
has value 20:

```c
int var;
var = 10;
var = 20;
```

Operators **`+` (plus), `-` (minus), `*` (multiply), `/` (divide) and `%`
(modulus)** are used as normal mathematical operators. As customary, `+`
and `-` have lower precedence than `*`, `/` and `%` (i.e., the latter are
evaluated first, regardless of their position in the expression). The
modulus operator can only be applied for integers, but the others work
for both floating point numbers and integers. Parenthesis can be used to
control the precedence (order of computation) as taught in school. Here
are a few examples:

```c
float fa = 5.0 / 2; /* using '5.0' to distinguish float constant from integer constant */
int ia = 5 / 2; /* different result than above because this is integer; */
char cb = 3 * (1 + 2);
long lc = cb * fa;
```

The above example also shows that multiple operators and expressions can
be used to form a single statement \-- here together with variable
declaration and its initialization.

C provides an alternative unary way for incrementing or decrementing the
value of a variable by one, by using increment and decrement operators.
These operators take either postfix or prefix form. In postfix form,
`a++` increments value of a by one, and `a--` decrements the value of a
by one. In prefix form, these operators are `++a` and `--a`. The
functionality in postfix and prefix formats is not completely
equivalent: in postfix form the value of the expression is evaluated
before the adjustment to the variable takes place, but in prefix form
the value is evaluated after the adjustment. This can have significance
when the unary increment/decrement operator is used as part of a longer
expression.

Another alternative is to use assignment operators, such as `a += 2`
which is equivalent `a = a + 2`. The assignment operator formant works
for all above arithmetic operators.

Below example shows these operators in use:

```c
int main(void)
{
    int varA; /* Value is unspecified now */
    varA = 10; /* value is set to 10 */
    varA++; /* value is 11 */
    varA *= 2; /* value is 22 */
}
```

## Type conversions

Because C can do implicit type conversions between variables, there can
be multiple data types as part of single expression. When larger data
type is converted into a smaller one, the excess high-order bits are
dropped, and therefore the value may change. When float is assigned into
integer, the decimals will be truncated.

Conversions can be forced explicitly using a **type cast** by including
the intended data type before an expression in parenthesis. Sometimes
this can affect the outcome of the expression, as happens in the
following example:

```c
float f = 1.5;
int a = f + f;
int b = (int) f + (int) f;
```

The above program causes the value of \'**a**\' to be 3, while value of
\'**b**\' is 2. The first assignment to variable \'**a**\' calculates
1.5 + 1.5 = 3 (as floating point number), which is automatically
converted to integer as part of assignment operation to \'**a**\'. In
the second case (assignment to \'**b**\'), the value of \'**f**\' is
first converted to integer on both sides of the plus operation, which
causes its value to change from 1.5 to 1. After this the result becomes 2. Use of type casts is normally not necessary in simple programs, but
sometimes are unavoidable.


