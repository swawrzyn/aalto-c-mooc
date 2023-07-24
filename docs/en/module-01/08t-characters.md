# Tasks: Characters

## Task #1: ASCII Chart

**Objective:** Getting more familiar with printf format specifications.
You will also get an initial look at ASCII coding system and hexadecimal
numbers: how different displayed characters are mapped to numeric
values, that can be presented either as decimal or hexadecimal numbers.

Implement function `void ascii_chart(char min, char max)` that outputs
(a portion of) ASCII character mapping. It should iterate through
numbers starting from \'min\' and ending to (and including) \'max\'.

For each displayed item, the output should look like following:

-   three-character field that shows the given number (integer) in
    decimal format. If the number takes less than three characters (it
    is \< 100), it is aligned right.

-   one space, followed by four-character field that shows the same
    number in hexadecimal format. Each hexadecimal number should take
    two characters, and one-digit numbers are prefixed with 0. The whole
    hexadecimal number is prefixed with \'0x\'. For example, number 1 is
    shown as \'0x01\'.

-   one space, followed by the same number when printed in character
    format (always one-character field). The number is converted into a
    character according to ASCII coding system.

    Some character codes are not \"printable\", and do not produce
    sensible output with this formatting. For non-printable characters,
    just \'?\' should be shown. You can use function
    `int isprint(int c)` ([man
    page](http://linux.die.net/man/3/isprint "isprint manual page")) to
    test if character in variable \'c\' is printable. If function
    returns 0, the character is not printable and should show as \'?\'.
    If it is non-zero the character should be printed normally.

-   one tab (\'\\t\'), if the current line has less than four entries
    printed. On the fourth entry, you should change to the next line,
    i.e., instead of tab, print newline (\'\\n\').

You should cycle through each number in the parameter range in the
above-mentioned format. For example, call ascii_chart(28,38), should
show the following:

```output
​    28 0x1c ?   29 0x1d ?   30 0x1e ?   31 0x1f ?
    32 0x20     33 0x21 !   34 0x22 "   35 0x23 #
    36 0x24 $   37 0x25 %   38 0x26 &
```


## Task #2: Secret Message

**Objective:** More playing with character manipulation, loops and use
of functions. Also, this works as a preliminary introduction to strings
(actual content in module 2).

Implement function `void secret_msg(int msg)` which decrypts (and
encrypts) a given message using a primitive algorithm (as described
below). Each secret message is identified by integer that is given as
the parameter of this call (\'msg\'). You receive the message one
character at a time by calling function
`char get_character(int msg, unsigned int cc)` that is given in the
exercise template. Implementation of that function contains some
concepts introduced only in Module 2 (arrays, strings), but you don\'t
need to mind about them yet. Just assume that the function returns
character number \'cc\' from message that is numbered \'msg\' (which is
just the same value passed with the call to secret_msg).

Character numbering starts from 0. You will need to call get_character
multiple times, by increasing the value of \'cc\' by one for each call,
until you receive 0 as the return value (i.e., cc is the character count
from the beginning of the message).

As you read the characters in message, you\'ll need to decrypt each of
them at a time and **print the decrypted character to screen**, until
you reach the end of the message (do not print the terminating 0).

The decryption algorithm is as follows: you decrement the received
character code from 158 (158 - code, where code is the value returned by
get_character), and the print the result as a character.

You can test this with messages numbered 0 and 1 that are provided in
src/main.c. If the function works, these messages should translate to
readable short sentences (in English). The TMC tests have also other
message numbers.