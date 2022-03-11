#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int j, b;

	for (j = 0; j <= 23; j++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar ('0' + j / 10);
			_putchar ('0' + j % 10);
			_putchar (':');
			_putchar ('0' + b / 10);
			_putchar ('0' + b % 10);
			_putchar ('\n');
		}
	}
}
