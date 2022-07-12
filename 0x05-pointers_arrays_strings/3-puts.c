#include "main.h"
#include <stdio.h>

/**
 * _puts - A function that ptints string out to the stdout
 *
 * @c: The character being inputed
 * Return: 0
 */
void _puts(char *c)
{
	while(*c != '\0')
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
}
