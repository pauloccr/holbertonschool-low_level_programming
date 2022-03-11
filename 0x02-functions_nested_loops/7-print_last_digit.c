#include "main.h"
/**
 * print_last_digit -  function that prints the last digit of a number
 * @r: integer argument
 * Return: last digit of number
 */

int print_last_digit(int r)
{
	r = r % 10;

	if (r >= 0)
	{
		_putchar ('0' + r);
		return (r);
	}

	if (r < 0)
	{
		r = (r * -1);
		_putchar ('0' + r);
		return (r);
	}
	return (0);
}
