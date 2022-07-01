#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A function that prints last digit
 *
 * Description using the int c gets the last index of the random number
 * Return: 0
 */
int main(void)
{
	int n;
	int c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	c = n % 10;
	if (c > 5)
	{
		printf("Last digit of %i is %d and is greater than 5\n", n, c);
	}
	else if (c == 0)
	{
		printf("Last digit of %i is %d and is 0\n", n, c);
	}
	else
	{
		printf("Last digit of %i is %d and is less than 6 and not 0\n", n, c);
	}
	return (0);
}
