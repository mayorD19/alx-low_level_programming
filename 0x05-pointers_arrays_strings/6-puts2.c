#include "main.h"

/**
 * puts2 - A function to print the first stdout
 *
 * @str: The character passed
 * Return: 0
 */
void puts2(char *str)
{
	int c;
	char s;

	for (c = 0; str[c] != 0; c++)
	{
		if (c % 2 == 0)
		{
			s = str[c];
			_putchar(s);
		}
	}
	_putchar('\n');
}
