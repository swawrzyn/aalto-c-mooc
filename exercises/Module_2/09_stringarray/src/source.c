#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "source.h"

/* Print string array, last element is NULL */
/* Parameters:
 * array: string array to be printed, each string on own line */
void print_strarray(char *array[])
{
	unsigned int i = 0;
	while (*(array + i) != NULL) {
		printf("%s\n", *(array + i));
		i++;
	}
}

/* Put strings from string separated by space to a string array */
/* Parameters:
 * string: string to be cut into parts and placed into the array, 
   remember to add ending zeros '\0' for strings and NULL to the end of the whole array!
 * arr: ready-made array that the strings will be put into */
void str_to_strarray(char *string, char **arr)
{
	char *curr_str = *arr;

	while (*string) {
		if (*string == ' ') {
			*curr_str = '\0';

			arr++;
			curr_str = *arr;
		} else {
			*curr_str = *string;
			curr_str++;
		}
		string++;
	}

	*curr_str = '\0';
	*(arr + 1) = NULL;
}
