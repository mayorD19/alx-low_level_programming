#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A function to print alphabets
 *
 * Description using the putchar function we print the the alphabets
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
