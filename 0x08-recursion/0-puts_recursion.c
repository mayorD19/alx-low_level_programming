#include "main.h"

/**
 * _puts_recursion - A function that counts a string
 *
 * @s: the input passed
 * Return: 0
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
