#include "main.h"
#include <stdio.h>

 /**
  * main
  *Description: a program that prints day of the yeae, and how
  *many days left in the year.
  *
  *Return: 0
  */
int main(void)
{
	int month;
	int day;
	int year;

	month = 02;
	day = 29;
	year = 2000;

	printf("Date: %2d/%2d/%4d\n", month, day, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	return (0);
}
