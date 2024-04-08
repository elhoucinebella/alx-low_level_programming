#include <stdio.h>

/**
 * puts2 -  prints every other character of a string
 *
 * @str: the string to be printed
 *
 *Return:
 */
void puts2(char *str)
{
	int index = 0;

	if (str == NULL)
		return;

	while (str[index] != '\0' && str[index + 1] != '\0')
	{
		putchar(str[index]);
		index += 2;
	}
	putchar('\n');
}
