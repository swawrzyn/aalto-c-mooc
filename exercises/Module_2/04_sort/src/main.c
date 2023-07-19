#include <stdio.h>
#include <string.h>
#include "source.h"

int main(void)
{
	/* Sort. Implement a function to print
     * the resulting array to see that it really works */
	int arr[] = { 3, 4, 7, 2, 8 };
	sort(arr, 5);

	int i;

	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
