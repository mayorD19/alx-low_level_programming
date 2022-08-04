#include <stdarg.h>

/**
 * sum_them_all - A function that sums up the whole arguments it recieves
 *
 * @n: The constant parameter
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int d = 0;
	int sumation = 0;

	va_list begin;

	va_start(begin, n);

	if (n == 0)
	{
		return (0);
	}
	for (d = 0; d < n; d++)
		sumation += va_arg(begin, int);

	va_end(begin);
	return (sumation);
}
