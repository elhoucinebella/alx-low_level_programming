#include <stdio.h>
#include "main.h"

/**
 *_strcat - concatenates two strings
 *
 *@dest: the destination string
 *@src: the source string
 *
 *Return: pointer to the resulting string dest
 **/
char *_strcat(char *dest, char *src)
{
	int lenght, i;

	lenght = 0;

	while (dest[lenght] != '\0')
	{
		lenght++;
	}

	for (i = 0; i[src] != '\0'; lenght ++, i++)
	{
		dest[lenght] = src[i];
	}

	dest[lenght] = 0;

	return (dest);
}

