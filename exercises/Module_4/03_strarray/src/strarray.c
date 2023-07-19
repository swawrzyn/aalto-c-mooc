#include <stdio.h>
#include "strarray.h"

/* Exercise a: Initializes the string array to contain the initial
 * NULL pointer, but nothing else.
 * Returns: pointer to the array of strings that has one element
 *      (that contains NULL)
 */
char **init_array(void)
{
	return NULL; // replace this
}

/* Releases the memory used by the strings.
 */
void free_strings(char **array)
{
	(void)array; // replace this
}

/* Exercise b: Add <string> to the end of array <array>.
 * Returns: pointer to the array after the string has been added.
 */
char **add_string(char **array, const char *string)
{
	(void)array; // replace these lines
	(void)string;
	return NULL; // replace this
}

/* Exercise c: Convert letters of all strings in <array> to lower case.
 */
void make_lower(char **array)
{
	(void)array; // replace this
}

/* Exercise d: reorder strings in <array> to lexicographical order */
void sort_strings(char **array)
{
	(void)array;
}

/* You can use this function to check what your array looks like.
 */
void print_strings(char **array)
{
	if (!array)
		return;
	while (*array) {
		printf("%s  ", *array);
		array++;
	}
	printf("\n");
}
