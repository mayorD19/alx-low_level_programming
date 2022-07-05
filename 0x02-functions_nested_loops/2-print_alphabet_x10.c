#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - A function that prints letter ten times
 *
 * Description using the putchar to print a letter
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int c, d;

	for (c = 0; c < 10; c++)
	{
		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}
