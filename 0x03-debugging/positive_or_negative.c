#include <stdio.h>
#include "main.h"

/**
 * postive_or_negative - to check if a number is + or -
 *
 * @n: positive or negative function
 * Return: 0
 */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
}
