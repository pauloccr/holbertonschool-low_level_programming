#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int a, b, r;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			r = a * b;
			if (b == 0)
				_putchar ('0');
			else if (r <= 9)
			{
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
				_putchar ('0' + r);
			}
			else
			{
				_putchar (',');
				_putchar (' ');
				_putchar ('0' + r / 10);
				_putchar ('0' + r % 10);
			}
		}
		_putchar ('\n');
	}
}
