#include "main.h"
#include <stdio.h>
/**
 * print_sign - prints signs
 * @n: parameter
 * Return: 1 and 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	}
	return (1);

	if (n == 0)
	{
		_putchar('0');
	}
	return (0);

		if (n < 0)
		{
			_putchar('-');
		}
			return (-1);
}
