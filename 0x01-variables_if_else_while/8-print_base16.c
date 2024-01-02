#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: a program that prints numbers of 16.
 *
 * Return: 0 always (success)
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	for (digit = 'a'; digit <= 'f'; digit++)
	{
		putchar(digit);
	}

	{
		putchar('\n');
	}

	return (0);
}
