#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 * Description: a program that prints numbers
 * Return: 0 always (success)
 */

int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
	if (c != 9)
	{															putchar(',');
																putchar(' ');
	}

	c++;
	}
	putchar('\n');
	return (0);
}
