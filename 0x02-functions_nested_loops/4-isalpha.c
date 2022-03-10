#include "main.h"

/**
 * _isalpha - Function that checks for alphabetic character
 * @c: arguments that validates if condition is true
 * Return: Returns 1 if c is a letter, lowercase or uppercase,
 * Returns 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
