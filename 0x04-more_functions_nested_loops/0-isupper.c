#include "main.h"
#include <stdio.h>

/**
 * _isupper - To check for upper case letters
 *
 * @c: the charcter to check
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
