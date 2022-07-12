#include "main.h"

/**
 * puts_half - A function that divides a string into half
 *
 * @str: The character divided
 * Return: 0
 */
void puts_half(char *str)
{
	int a, b;
	char c;

	for (a = 0; str[a] != 0; a++)
	{
	}
	if (a % 2 == 0)
	{
		for (b = a / 2); str[b] != 0; b++)
		{
			c = str[b];
			_putchar(c);
		}
	}
	else
	{
		for ((b = (a - 1) / 2); str[b] != 0; b++)
		{
			c = str[b];
			_putchar(c);
		}
	}
	_putchar('\n');
}
