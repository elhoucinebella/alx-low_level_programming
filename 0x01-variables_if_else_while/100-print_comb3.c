#include<stdio.h>
/**
 * main - Entry point
 *Description: a program that prints combinations.
 * Return: 0 always(success)
 */

int main(void)
{
	int i, j;

		for (i = 0; i <= 8; ++i)

		{
			for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			{

					if (!(i == 8 && j == 9) && (i < 8))
				{
					putchar(',');
					putchar(' ');
				}

			}

		}
	}

	putchar('\n');

return (0);
}
