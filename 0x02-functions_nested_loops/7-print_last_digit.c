#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @a: function parameter.
 * Return: i
 */
int print_last_digit(int a)
{
	int i = a % 10;

	if (i < 0)

		i = -i;
	_putchar (i + '0');
	return (i);
}
