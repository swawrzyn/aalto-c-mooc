#include <stdio.h>
#include "source.h"

#ifndef MAWKKE
// longer solution by Pasi

/* 03-mastermind
 */
void mastermind(const int *solution, const int *guess, char *result,
		unsigned int len)
{

	unsigned int i, j;

	for (i = 0; i < len; i++) {
		if (guess[i] == solution[i]) {
			result[i] = '+';
		} else {
			unsigned int found = 0;
			for (j = 0; j < len; j++) {
				if (guess[i] == solution[j]) {
					found = 1;
					result[i] = '*';
					break;
				}
			}

			if (found == 0) {
				result[i] = '-';
			}
		}
	}
}
#endif
