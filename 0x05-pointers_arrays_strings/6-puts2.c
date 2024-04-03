#include <stdio.h>
/**
 *
 *
 *
 *
 *
 */
void puts2(char *str)
{
	int index = 0;

	if (str == NULL)
		return;

	while (str[index] != '\0')
	{
		putchar(str[index]);
		
		index += 2;
	}
	putchar('\n');
}
