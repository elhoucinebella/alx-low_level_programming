#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatinates two stringes
 *
 * @dest: the destination of the strings
 *
 * @src: the source of the strings
 *
 * @n: the number of bytes
 *
 * Return: dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int lenght = 0, a;

	while (dest[lenght] != '\0')
	{
		lenght++;
	}

	for (a = 0; a < n && src[a] != '\0'; lenght++, a++)
	{
		dest[lenght] = src[a];
	}

	dest[lenght] = '\0';

	return (dest);
}
