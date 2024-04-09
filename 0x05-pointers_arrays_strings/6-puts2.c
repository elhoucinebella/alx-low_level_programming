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
	    
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);

		if (str[i + 1] != '\0')
		i += 2;

		else
			break;
	}
		putchar('\n');
}
