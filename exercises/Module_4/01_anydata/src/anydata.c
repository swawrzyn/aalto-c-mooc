#include <stdio.h>
#include "anydata.h"

/* 01_anydata (a)
 * Return a new AnyData object based on the given input
 */
AnyData setDouble(double value)
{
	(void)value; // replace these lines with your code
	AnyData ad;
	ad.type = UNDEF;
	return ad;
}

AnyData setInt(int value)
{
	(void)value; // replace these lines with your code
	AnyData ad;
	ad.type = UNDEF;
	return ad;
}

AnyData setByte(char value)
{
	(void)value; // replace these lines with your code
	AnyData ad;
	ad.type = UNDEF;
	return ad;
}

void printDouble(double val)
{
	printf("D:%lf", val);
}

void printInt(int val)
{
	printf("I:%d", val);
}

void printByte(char val)
{
	printf("B:%d", val);
}

/* 01_anydata (b)
 * Print the given AnyData value, using one of the above functions
 */
void printValue(AnyData val)
{
	(void)val; // replace these lines with your code
}
