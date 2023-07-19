#include <stdlib.h>
#include "gameoflife.h"

/* Exercise a: Allocates needed memory for the field structure and
 * the actual game field. 'xsize' and 'ysize' indicate the horizontal and
 * vertical dimensions of the field.
 * 
 * Returns: pointer to the Field structure allocated by this function.
 */
Field *createField(unsigned int xsize, unsigned int ysize)
{
	(void)xsize; // replace these lines
	(void)ysize;
	return NULL; // replace this
}

/* Free memory allocated for field <f>.
 */
void releaseField(Field *f)
{
	(void)f;
}

/* Exercise b: Initialize game field by setting exactly <n> cells into
 * ALIVE state in the game field <f>.
 */
void initField(Field *f, unsigned int n)
{
	(void)f;
	(void)n;
}

/* Exercise c: Output the current state of field <f>.
 */
void printField(const Field *f)
{
	(void)f;
}

/* Exercise d: Advance field <f> by one generation.
 */
void tick(Field *f)
{
	(void)f;
}
