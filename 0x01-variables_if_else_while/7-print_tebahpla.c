#include <stdio.h>

/**
 * main - A function that reverses alphabet
 *
 * Description using the prefix minus minus to reverse alphabet
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
