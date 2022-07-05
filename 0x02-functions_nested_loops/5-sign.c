#include <stdio.h>
#include "main.h"

/**
 * print_sign - A function to print signs
 *
 * @n: using the function to print for signs
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
