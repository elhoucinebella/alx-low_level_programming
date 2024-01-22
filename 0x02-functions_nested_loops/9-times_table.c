#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 * Return: void
 **/
void times_table(void)
{
	int a, i, result;

	for (a = 0; a <= 9; a++)
	{
		for (i = 0; i <= 9; i++)

		{
			result = a * i;
			if (i == 0)
				printf("%d, ", result);
			else
			{
				printf("%2d", result);
				if (i != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
