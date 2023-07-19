#include "source.h"

#include <math.h>
#include <stdio.h>

void multi_table(unsigned int xsize, unsigned int ysize) {
  unsigned int x, y;

  for (y = 1; y <= ysize; y++) {
    for (x = 1; x <= xsize; x++) {
      printf("%4u", x * y);
    }
    printf("\n");
  }
}

void draw_triangle(unsigned int size) {
  unsigned int s;

  for (s = 1; s <= size; s++) {
    unsigned int dots, hashes;
    for (dots = size - s; dots > 0; dots--) {
      printf(".");
    }

    for (hashes = s; hashes > 0; hashes--) {
      printf("#");
    }

    printf("\n");
  }
}

double distance(int x, int y)
{
	return sqrt(x * x + y * y);
}

void draw_ball(unsigned int radius) {
  int x, y;

  for (y = -radius; y < (int)radius + 1; y++) {
    for (x = -radius; x < (int)radius + 1; x++) {
      if (distance(x, y) <= radius) {
        printf("*");
      } else {
        printf(".");
      }
    }
    printf("\n");
  }
}
