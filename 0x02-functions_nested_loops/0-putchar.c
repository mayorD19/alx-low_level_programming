#include <stdio.h>
#include "main.h"
/**
 * main - A functionthat prints _putchar
 *
 * Description using the putchar to print _putchar
 * Return: 0
 */

int main(void)
{
	char x[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	unsigned int c;

	for (c = 0; c < sizeof(x); c++)
	{
		_putchar(x[c]);
	}
_putchar('\n');
return (0);
}
