#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "spreadsheet.h"

const struct {
	char *name;
	double (*fptr)(Sheet *, Point, Point);
} functions[] = { { "sum", sumfunc },
		  { "max", maxfunc },
		  { "count", countfunc },
		  { NULL, NULL } };

/* Creates a new spreadsheet with given dimensions.
 * Returns pointer to the allocated Sheet structure.
 */
Sheet *create_sheet(unsigned int xsize, unsigned int ysize)
{
	(void)xsize; // remove this line
	(void)ysize; // remove this line
	return NULL; // replace this line
}

/* Releases the memory allocated for sheet.
 */
void free_sheet(Sheet *sheet)
{
	(void)sheet; // remove this line
}

/* Returns pointer to the Cell structure at given location <p>
 * in spreadsheet <sheet>.
 */
Cell *get_cell(Sheet *sheet, Point p)
{
	(void)sheet; // remove this line
	(void)p; // remove this line
	return NULL; // replace this line
}

/* Convert two-letter user input into coordinates of type Point.
 */
Point get_point(char xc, char yc)
{
	Point p;
	p.x = toupper(xc) - 'A';
	p.y = toupper(yc) - 'A';
	return p;
}

/* Parses user input in <command> and applies it in spreadsheet <sheet>.
 * Returns 1 if input was valid, or 0 if it was not.
 */
int parse_command(Sheet *sheet, const char *command)
{
	double val;
	Point p;
	char xc, yc;
	int ret = sscanf(command, "%c%c %lf", &xc, &yc, &val);
	if (ret == 3) {
		p = get_point(xc, yc);
		set_value(sheet, p, val);
		return 1;
	}

	char func[10];
	Point ul, dr;
	char xc1, yc1, xc2, yc2;

	ret = sscanf(command, "%c%c %9s %c%c %c%c", &xc, &yc, func, &xc1, &yc1,
		     &xc2, &yc2);
	if (ret == 7) {
		p = get_point(xc, yc);
		ul = get_point(xc1, yc1);
		dr = get_point(xc2, yc2);
		int i = 0;
		while (functions[i].name) {
			if (!strcmp(functions[i].name, func)) {
				set_func(sheet, p, functions[i].fptr, ul, dr);
				return 1;
			}
			i++;
		}
	}
	return 0;
}

/* Prints the content of given spreadsheet.
 */
void print_sheet(Sheet *sheet)
{
	printf("%-8c", ' ');
	for (unsigned int x = 0; x < sheet->xsize; x++) {
		printf("%-8c", 'A' + x);
	}
	fputs("\n", stdout);

	for (unsigned int y = 0; y < sheet->ysize; y++) {
		printf("%-8c", 'A' + y);
		for (unsigned int x = 0; x < sheet->xsize; x++) {
			Point p;
			p.x = x;
			p.y = y;
			Cell *c = get_cell(sheet, p);
			switch (c->type) {
			case VALUE:
			case FUNC:
				printf("%-8.1f", eval_cell(sheet, p));
				break;

			default:
				printf("%-8c", '*');
				break;
			}
		}
		fputs("\n", stdout);
	}
}

/* Set the content of location <p> in spreadsheet to constant <value>
 */
void set_value(Sheet *sheet, Point p, double value)
{
	(void)sheet; // remove this line
	(void)p; // remove this line
	(void)value; // remove this line
}

/* Set the content of location <p> in spreadsheet to given function.
 * <func> is pointer to the function. <ul> is the upper left corner and 
 * <dr> is the lower right corner of the area over which the function
 * is applied.
 */
void set_func(Sheet *sheet, Point p, double (*func)(Sheet *, Point, Point),
	      Point ul, Point dr)
{
	(void)sheet; // remove this line
	(void)p; // remove this line
	(void)func; // remove this line
	(void)ul; // remove this line
	(void)dr; // remove this line
}

/* Evaluate the content of cell at location <p>.
 * If cell is constant value, that is returned.
 * If cell contains function, the function is evaluated and its result returned.
 * If cell is unspecified or location out of bounds, NAN is returned.
 */
double eval_cell(Sheet *sheet, Point p)
{
	(void)sheet; // remove this line
	(void)p; // remove this line
	return NAN; // replace this line
}

/* Calculate the maximum value within area with upper left corner <ul>
 * and lower right corner <dl>, and return it.
 */
double maxfunc(Sheet *sheet, Point ul, Point dr)
{
	(void)sheet; // remove this line
	(void)ul; // remove this line
	(void)dr; // remove this line
	return NAN; // replace this line
}

/* Calculate the sum of values within upper left corner <ul> and
 * lower right corner <dr>, and return the result.
 */
double sumfunc(Sheet *sheet, Point ul, Point dr)
{
	(void)sheet; // remove this line
	(void)ul; // remove this line
	(void)dr; // remove this line
	return NAN; // replace this line
}

/* Count the number of specified cells inside the area with upper left
 * corner <ul> and lower right corner <dr>.
 */
double countfunc(Sheet *sheet, Point ul, Point dr)
{
	(void)sheet; // remove this line
	(void)ul; // remove this line
	(void)dr; // remove this line
	return NAN; // replace this line
}
