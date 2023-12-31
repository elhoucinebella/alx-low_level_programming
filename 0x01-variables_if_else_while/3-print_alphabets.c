#include<stdio.h>
/**
 * main - Entry point
 * Description: lowercase followed by uppercase
 * Return: 0 always (success)
 */
int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	letter = 'A';
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	{
	putchar('\n');
	}

	return (0);
}
