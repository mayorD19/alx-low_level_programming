#include "main.h"

/**
 * to_check - A function that gets the natural square root of a no
 *_sqrt_recursion - A function to get the normal square root
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
int _sqrt_recursion(int n)
{
	return (to_check(1, n));
}
