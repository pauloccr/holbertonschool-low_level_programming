#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This program will assign random number variable n each time executed
 * Return: void
 */
void positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
}
