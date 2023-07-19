#include <ctype.h>
#include "source.h"

/* Count Alpha
 * Count number of alphabetic characters in the given string <str>,
 * and return the count
 */
int count_alpha(const char *str)
{
	int count = 0;

	while (*str) {
		if (isalpha(*str) != 0) {
			count++;
		}

		str++;
	}
	return count;
}

/* Count Substring
 * Count number of occurances of substring <sub> in string <str>,
 * and return the count.
 */
int count_substr(const char *str, const char *sub)
{
	(void)str;
	(void)sub;
	return 0; // replace this
}
