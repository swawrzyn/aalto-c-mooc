#ifndef AALTO_MINESWEEPER_H
#define AALTO_MINESWEEPER_H

typedef enum { DEAD, ALIVE } State;

typedef struct {
	unsigned int xsize, ysize;
	State **cells;
} Field;

Field *createField(unsigned int xsize, unsigned int ysize);

void releaseField(Field *f);

void initField(Field *f, unsigned int n);

void printField(const Field *f);

void tick(Field *f);

#endif /* AALTO_MINESWEEPER_H */
