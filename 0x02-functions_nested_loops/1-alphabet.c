#include "main.h"
/**
 * print_alphabet - function that prinrs lowercase alphabets.
 *
 * Return: 0
 */

void print_alphabet(void)

{
	char j = 'a';

	for (j = 'a' ; j <= 'z'; j++)

		_putchar(j);
	_putchar('\n');
}
