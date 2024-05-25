#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints hals of a string
 *
 * @str: the string to be half printed
 *
 *Return:
 */

void puts_half(char *str)
{
	int length = 0;
	int start;

	while (str[length] != '\0')
	{
	length++;
	}

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	

	else
	{
		    start = (length - 1) / 2 + 1;
	}

	for (; start < length; start++)
	{
		putchar(str[start]);
	}
	putchar('\n');
}
