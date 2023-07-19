#include "source.h"

/* Selection sort */
/* Parameters:
 * start: start of an array
 * size: length of an array
 */
void sort(int *start, int size)
{
	int i, j;

	for (i = 0; i < size; i++) {
		for (j = i + 1; j < size; j++) {
			if (start[i] > start[j]) {
				int temp = start[j];
				start[j] = start[i];
				start[i] = temp;
			}
		}
	}
}
