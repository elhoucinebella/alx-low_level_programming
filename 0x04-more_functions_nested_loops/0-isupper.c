#include<stdio.h>
#include "main.h"

/**
 * _isupper - checks if a character is lower case or uppercase
 * @c: character to be checked
 * Return: 1 for uppercase and 0 for lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	return (0);
}
