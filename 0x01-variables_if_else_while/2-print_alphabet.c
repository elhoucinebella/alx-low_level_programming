#include<stdio.h>
/**
 * main - Entry point
 * Description: a program that prints alphabets
 * Return: 0 always (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')

		{
		putchar(c);
		c++;
		}

		putchar('\n');
	return (0);
}
