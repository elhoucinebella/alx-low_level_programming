#include "main.h"
#include<stdio.h>

/**
 * _strlen - returns the lengh of the string
 *
 * @s: the string whose value is to be printed
 *
 * Return: nothing
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s++)
	lenght++;
	return (lenght);
}
