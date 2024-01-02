#include<stdio.h>
/**
 * main - Entry point.
 * Description: a program that prints alphabers in lowercase.
 * Return: 0 always (success)
 */
int main(void)
{
	char alphabets = 'z';

	for (alphabets = 'z'; alphabets >= 'a'; alphabets--)

	{
		putchar(alphabets);
	}

	{
		putchar('\n');
	}
	return (0);
}
