#include "main.h"
	
/**
 *main - Entry Point
 *Descreption: a program that prints alphabets 10
 *times.
 *Return: 0 always(success)
 */

void print_alphabet(void)

{
	char j;

	for (j = 'a' ; j <= 'z'; j++)
	{
		_putchar(j);
		_putchar('\n');
	}
}
