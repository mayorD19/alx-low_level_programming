#include <stdio.h>

/**
 * main - A function that prints hexadecimals
 *
 * Description using the putchar to print hexadecimals
 * Return: 0
 */
int main(void)
{
	char c;
	int d;

	 for (c = 'a'; c <='f'; c++)
	 {
	 	putchar(c);
	 }
	 for  (d = 0; d < 10; d++)
	 {
		 putchar(d + '0');
	 }
	 putchar('\n');
	 return (0);
}
