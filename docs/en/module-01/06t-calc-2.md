# Task: Calculator

**Objective:** practice use of conditional statements and formatted
input and output using scanf and printf.

Write function `void simple_math(void)` that asks three values from the
user: number, operator, and another number. Operator should be one of
the following characters: \'+\', \'-\', \'\*\' or \'/\'. If some other
character is used as operator, the function should print \"ERR\"
(without quotes). The numbers should be float type. If user does not
type a valid number-operator-number combination, the function should
print \"ERR\". When valid input is given, the function performs the
calculation as given, and prints the result on the screen, using the
precision of one decimal:

```output
8 - 2 // [!code error]
6.0

8.3 / 5.1 // [!code error]
1.6

-3.456 - 2.31 // [!code error]
-5.8
```

**Hint:** Check how character constants are used, and single character
as scanf format conversion.