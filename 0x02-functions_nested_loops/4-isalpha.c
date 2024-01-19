#include "main.h"
#include <stdio.h>

/**
 * _isalpha -checks for alphabetic characters
 * @c: function parameter
 * Return: 1 and 0
 */
int _isalpha(int c)

{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);

}
