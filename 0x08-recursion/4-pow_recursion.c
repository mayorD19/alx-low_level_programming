#include "main.h"

/**
 * _pow_recursion - A function that raises trhe power of another integer
 *
 * @x: First argument passed
 * @y: Second argument passed
 * Return: X and Y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y-1));
}
