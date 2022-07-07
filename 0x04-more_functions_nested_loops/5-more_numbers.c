#include "main.h"

/**
 * more_numbers - A function that prints numbers fourteen times
 *
 * Description Using the putchar three times
 * Return: 0
 */
void more_numbers(void)
{
	int n, c;

	n = c = 0;
	while (n < 10)
	{
		while (c <= 14)
		{
			if (c >= 10)
			{
				_putchar(c / 10 + '0');
			}
			_putchar(c % 10 + '0');
			++c;
		}
		_putchar('\n');
		c = 0;
		n++;
	}
}
