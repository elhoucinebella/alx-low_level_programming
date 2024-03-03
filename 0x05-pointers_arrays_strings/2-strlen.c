#include "main.h"
#include<stdio.h>

/**
 * strlen - returns the lengh of the string
 *
 * @s: the string concerned
 * Return: nothing
 */

int _strlen(char *s)
{
	int lenght = 0;

	while(*s++)
	lenght++;
	return (lenght);
}
