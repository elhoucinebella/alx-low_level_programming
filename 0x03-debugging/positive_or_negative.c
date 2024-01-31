#include "main.h"
/**
 * positive_or_negative - prints if integer is positive or negative
 * @i: the value to be checked
 * Return 0 always (success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);

	return;
}

