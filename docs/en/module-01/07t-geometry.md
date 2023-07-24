# Tasks: Geometry

### Task #1: Multiplication Table

**Objective:** Practice use of nested loops and formatted output

Implement function
`void multi_table(unsigned int xsize, unsigned int ysize)` that prints a
multiplication table on the screen that has numbers from 1 to
\'**xsize**\' on the x-axis, and numbers from 1 to \'**ysize**\' on the
y-axis, and products of these numbers in tabular format. Each number
should take 4 characters when printed on the screen, aligned to the
right. There is a newline character (\'\\n\') at the end of each line,
including the last line. For example, function call `multi_table(4,5)`
should result in the following output:

```output
​   1   2   3   4
   2   4   6   8
   3   6   9  12
   4   8  12  16
   5  10  15  20
```

### Task #2: Draw Triangle

**Objective**: Practice use of nested loops in C code, together with a
bit of conditional application logic.

Implement function `void draw_triangle(unsigned int size)` that draws an
ASCII box that contains a triangle.

The box should be **size** characters wide, and **size** characters
tall. The box is split diagonally in two such that the righthand and
bottom characters are \'#\', and the lefthand and top characters are
\'.\'.

The first line contains one \'#\' character at the right edge, the
second line contains two \'##\' characters, and so on. On the last line
all characters are \'#\'.

All lines (also the last) end with a newline character (\'\\n\').

Here is an example calling `draw_triangle(5)`:

```output
....#
...##
..###
.####
#####
```

### Task 3: Draw Ball

**Objective:** One more exercise on loops in C code, together with a
decision function that determines the output.

Implement function `void draw_ball(unsigned int radius)` that draws an
ASCII box that contains a circle filled with character (\'\*\').

The box is (2 \* radius + 1) characters wide and tall, i.e., just large
enough to contain the circle. There is a helper function
\'**distance**\' that returns the distance of given (x,y) coordinates
from (0,0). If the circle is centered at (0,0), you can use the
\'**distance**\' function such that if distance(x,y) \<= radius,
coordinate (x,y) is within the circle, otherwise it is outside the
circle.

If a square is within circle, print character \'\*\'. If a square is
outside the circle, print character \'.\'.

When `draw_ball(3)` is called, the output should be like this:

```output
...*...
.*****.
.*****.
*******
.*****.
.*****.
...*...
```

**Hint:** You can use also negative numbers as part of the for loop, as
long as the data type allows negative numbers.