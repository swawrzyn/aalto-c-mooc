#include <stdio.h>
#include "source.h"

/* Number swap
 * Swap the content of integers add addresses a and b
 */
void number_swap(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}

/* Array Sum
 * Calculate the sum of integers in array starting at address <array>.
 * There will be <count> elements in array. Return the sum as return value.
 */
int array_sum(int *array, int count)
{
	int* p_array = array;
	int sum = 0;
	int i;
	for (i = 0; i < count; i++) {
		sum += *(p_array + i);
	}

	return sum; // placeholder, replace with actual code
}

/* Array Reader */
/* Parameters:
 * vals: array to be filled 
 * n: maximum size of array
 * returns: number of values read */
int array_reader(int *vals, int n)
{
	int* p_vals = vals;
	int i;
	int total = 0;

	for (i = 0; i < n; i++) {
		total += scanf("%d", p_vals + i);
	}
	
	return total; // placeholder, replace with actual code
}
