#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - A function that prints numbers followed by a new line
 * @separator: The seperating parameter
 * @n: The integer paramter passed
 * Return: n
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int d = 0;
	va_list begin;

	va_start(begin, n);

	if (!separator)
	{
		return;
	}
	for (d = 0; d < n; d++)
	{
		printf("%d%s", va_arg(begin, int), d != (n - 1) ? separator : "");
	}


	va_end(begin);
	putchar('\n');
}
