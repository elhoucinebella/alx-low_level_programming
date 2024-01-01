#include<stdio.h>
/**
 * main - Entry point
 * Description: a program that prints numbers with putchar
 * Return: 0 always (success)
 */
int main(void)
{
	int N = 0;

	for (N = 0; N < 9; N++)

	{
		putchar(N + '0');
	}

	{
putchar('\n');
	}

	return (0);
}
