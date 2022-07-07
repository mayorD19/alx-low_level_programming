#include "main.h"
#include <stdio.h>

/**
 * print_number - A function that prints numbers
 *
 * @n: The character to be printed
 * Return: 0
 */
void print_number(int n)
{
	long a, b, c, d, e;

	b = n;
	e = a = 1;

	if (b < 0)
	{
		b *= -1;
		_putchar('-');
	}

	d = b;
	while (d >= 10)
	{
		a++;
		d /= 10;
	}
	for (c = 1; c < a; c++)
	{
		e *= 10;
	}
	while (e > 1)
	{
		_putchar((b / e) % 10 + '0');
		e /= 10;
	}
	_putchar(b % 10 + '0');
}
