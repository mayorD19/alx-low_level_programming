#include "main.h"
#include <stdio.h>

/**
 * main - A function that prints an alphabet
 *
 * Description Using the putchar function
 * Return: 0
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar('\n');
}
