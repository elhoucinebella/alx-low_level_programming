#include<stdio.h>
/**
 * main - Entry point
 * Description: a program that prints alphabets in lowercase
 * followed by alphb in uppercase
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	if (c != 'e' && c != 'q')
	{
		putchar(c);
	}

	{
	putchar('\n');
	}

	return (0);
}
