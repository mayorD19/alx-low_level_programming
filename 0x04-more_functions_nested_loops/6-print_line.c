#include "main.h"
#include <stdio.h>

/**
 * print_line - to print lines
 *
 * @n: the charcter to be printed
 * Return: 0.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
