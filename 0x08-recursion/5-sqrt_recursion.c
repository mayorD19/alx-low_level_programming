#include "main.h"

/**
 * to_check - A function that gets the natural square root of a no
 * @base: Parameter to check
 * @n: The parameter passed
 * Return: n
 */
int to_check(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (to_check(n + 1, base));
}
/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */
int _sqrt_recursion(int n)
{
	return (to_check(1, n));
}
