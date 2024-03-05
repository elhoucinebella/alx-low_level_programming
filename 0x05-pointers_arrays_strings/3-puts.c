#include"main.h"
#include<stdio.h>

/**
 * _puts - prints a string followed by a new line
 *
 * @str: the string to be printed
 *
 * Rerurn: nothing to be returned
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	putchar(*str);
	}

	putchar('\n');
}
