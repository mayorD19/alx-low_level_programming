#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_numbers - prints numbers
  * @separator: character to use to delimit
  * @n: number of elements to print
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int d;
	va_list begin;

	va_start(begin, n);
	for (d = 0; d < n; d++)
	{
		printf("%d", va_arg(begin, int));
		if (separator != NULL && d < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(begin);
}
