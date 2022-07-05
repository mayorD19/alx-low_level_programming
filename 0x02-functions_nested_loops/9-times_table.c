#include "main.h"
#include <stdio.h>

/**
 * times_table - prints time table from zero-nine
 *
 * Decsription using putchar and function
 * Return: 0
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = (a * b);
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (c >= 10)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else if (c < 10 && b != 0)
			{
				_putchar(' ');
				_putchar((c % 10) + '0');
			}
			else
			{
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
