#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: if statements
 *
 * Return 0 always (success)
 **/
int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%d is positive", n);
	}

	else if (n == 0)
	{
	printf("%d is zero", n);
	}

	else
	{
	printf("%dis negative", n);
	}
	return (0);
}
