#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the
 *
 * terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest: destination to the buffer
 *
 * @src: source string
 *
 * Return: pointer to dest
 **/

char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*src != '\0')
	{
	*dest_ptr = *src;
	dest_ptr++;
	src++;
	}

	*dest_ptr = '\0';

return (dest);

}
