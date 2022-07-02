#include <stdio.h>

/**
 * main - A function that prints numbers with comma's
 *
 * Description using the function to print numbers with comma spacing
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	if (c != '9')
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
