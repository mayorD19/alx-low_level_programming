#include "main.h"

/**
 * factorial - A function that prints the factorial of numbers
 *
 * @n: The charcter passed in as arguments
 * Return: s
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
