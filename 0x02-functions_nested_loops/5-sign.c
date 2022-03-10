#include "main.h"

/**
 * print_sign -  function that prints the sign of a number
 * @n: arguments that validates the condition
 * Return: Returns 1 if n is greater than zero, 0 if n is zero, -1 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	_putchar ('-');
	return (-1);
}
