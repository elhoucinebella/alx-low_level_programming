#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit
 * @c: the characters to be checked
 * Return: 1 for digit and 0 for character
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	return (0);
}
