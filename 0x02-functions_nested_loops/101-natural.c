#include <stdio.h>

/**
 * main - computes and prints multiples of thre and five below
 *
 * Return: 0
 */
int main(void)
{
	int i, result;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			result += i;
	printf("%d\n", result);
	return (0);
}
