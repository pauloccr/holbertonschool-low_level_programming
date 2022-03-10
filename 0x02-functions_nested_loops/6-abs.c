#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @r: argument that validates condition
 * Return: r or -r, depending on value
 */

int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		r *= -1;
		return (r);
	}
}
