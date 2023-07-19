#include <stdio.h>
#include <stdlib.h>
#include "ships.h"

const unsigned int xsize = 10;
const unsigned int ysize = 10;
const unsigned int shiplen = 3;

/* implement these functions */

/* Task a: Place <num> ships on the game map.
 */
void set_ships(unsigned int num)
{
	unsigned int i;

	for (i = num; i > 0; i--) {
		for (;;) {
			unsigned int xloc = rand() % 10;
			unsigned int yloc = rand() % 10;
			// 0 = horiz, 1 = vert
			unsigned int direction = rand() % 2;

			if (place_ship(xloc, yloc, direction) == 1) {
				break;
			}
		}
	}
}

/* Task b: print the game field
 */
void print_field(void)
{
	unsigned int x, y;

	for (y = 0; y <= 9; y++) {
		for (x = 0; x <= 9; x++) {
			if (is_visible(x, y) == 1) {
				printf("%c", is_ship(x, y));
			} else {
				printf("?");
			}
		}
		printf("\n");
	}
}

/* Task c: Ask coordinates (two integers) from user, and shoot the location.
 * Returns -1 if user gave invalid input or coordinates, 0 if there was no ship
 * at the given location; and 1 if there was a ship hit at the location.
 */
int shoot(void)
{
	unsigned int a, b, res;

	res = scanf("%d %d", &a, &b);

	if (res < 2 || a > 9 || b > 9) {
		return -1;
	}

	checked(a, b);

	char check_ship = is_ship(a, b);

	if (check_ship == '#') {
		return -1;
	} else if (check_ship == '+') {
		hit_ship(a, b);
		return 1;
	}

	return 0;
}

/* Task d: Returns 1 if game is over (all ships are sunk), or 0 if there
 * still are locations that have not yet been hit. <num> is the number of
 * ships on the game map. It is assumed to be the same as in the call to
 * set_ships function.
 */
int game_over(unsigned int num)
{
	unsigned int x, y;
	unsigned int hits = num * 3;

	for (y = 0; y <= 9; y++) {
		for (x = 0; x <= 9; x++) {
			if (is_ship(x, y) == '#') {
				hits--;
			}
		}
	}

	if (hits > 0) {
		return 0;
	}

	return 1;
}