#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - A function that prints last digit
 *
 * @n: using the function to output lst digit
 * Return: 0
 */
int print_last_digit(int c)
{
	c = c % 10;

	if (c < 0)
	{
		c = c * -1;
	}
	_putchar('0' + c);
	return (c);
}
