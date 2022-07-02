#include <stdio.h>

/**
 * main - A function that prints hexadecimals
 *
 * Description using the putchar to print hexadecimals
 * Return: 0
 */
int main(void)
{
	int c;
	char d;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}
	for (d = 'a'; d <= 'f'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
