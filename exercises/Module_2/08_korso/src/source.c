#include <stdio.h>
#include "source.h"

/* Korsoraattori
 */

void korsoroi(char *dest, const char *src)
{
	int i, counter = 0;

	char niinku[] = { 'n', 'i', 'i', 'n', 'k', 'u' };
	char totanoin[] = { 't', 'o', 't', 'a', 'n', 'o', 'i', 'n' };

	while (*src) {
		if (*src == 'k' && *(src + 1) == 's') {
			*dest = 'x';
			dest++;
			src++;
		} else if (*src == 't' && *(src + 1) == 's') {
			*dest = 'z';
			dest++;
			src++;
		} else if (*src == ' ') {
			counter++;

			*dest = ' ';
			dest++;

			if (counter % 3 == 0) {
				for (i = 0; i < 6; i++) {
					*dest = *(niinku + i);
					dest++;
				}

				*dest = ' ';
				dest++;
			} else if (counter % 4 == 0) {
				for (i = 0; i < 8; i++) {
					*dest = *(totanoin + i);
					dest++;
				}
				*dest = ' ';
				dest++;
			}
		} else {
			*dest = *src;
			dest++;
		}

		src++;
	}

	*dest = '\0';
}
