#include <stdio.h>

/**
 * main - A function that prints numbers
 *
 * Description using the putchar() to print characters in their ascii form
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}
	putchar('\n');
	return (0);
}
