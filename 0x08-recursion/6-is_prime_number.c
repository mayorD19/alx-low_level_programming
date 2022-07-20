#include "main.h"

/**
 * checker - to check the function 
 * is_prime_number - A function that returns one with prime nos
 *
 * @n: The character passed
 * Returns: n
 */
int checker(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	else if (n == base - 1)
		return (1);
	else if (base > n)
		return (checker(n + 1, base));
	return (1);
}
int is_prime_number(int n)
{
	return (checker(2, n));
}
