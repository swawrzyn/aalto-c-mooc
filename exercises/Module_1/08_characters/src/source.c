#include "source.h"

#include <ctype.h>
#include <stdio.h>
#include <string.h>

/* Don't touch the definition of msgs array! Checker uses this. */
char *msgs[10] = { "'6=*w+~)._", "J65+~5+~=0/*69,~+9;,9*~19++=79" };

void ascii_chart(char min, char max)
{
	int i, j = 1;

	for (i = min; i <= max; i++) {
		if (isprint(i) != 0) {
			printf("%3d 0x%2x %c", i, i, i);
		} else {
			printf("%3d 0x%2x ?", i, i);
		}

		if (j % 4 == 0) {
			printf("\n");
		} else {
			printf("\t");
		}

		j++;
	}
}

char get_character(int msg, unsigned int cc)
{
	if (msg >= 10 || !msgs[msg])
		return 0;

	if (strlen(msgs[msg]) <= cc)
		return 0;

	return msgs[msg][cc];
}

void secret_msg(int msg)
{
	int i = 0;
	int j = get_character(msg, i);

	while (j > 0) {
		printf("%c", 158 - j);
		i++;
		j = get_character(msg, i);
	}
}