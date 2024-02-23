#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: the number of times the '\' is to be printed
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
	_putchar('\n');
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
