#include <stdio.h>
#include "main.h"

/**
 * _abs - a function that prints absolute value
 *
 * @c: printing absolute value
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
