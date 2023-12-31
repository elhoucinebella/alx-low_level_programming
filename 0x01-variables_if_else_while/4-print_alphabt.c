#include<stdio.h>
/**
 * main - Entry point
 * Description: a program that prints alphabets in lowercase
 * followed by alphb in uppercase
 * Return: 0 (success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	if (letter != 'q' && letter != 'e')
	{
		putchar(letter);
	}
	letter++;

	{
	putchar('\n');
	}

	return (0);
}
