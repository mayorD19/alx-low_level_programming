#include "main.h"

/**
 * rev_string - A function that reverses a string
 *
 * @s: The charcater to be reversed
 * Return: 0
 */
void rev_string(char *s)
{
	int c, d;
	char character;

	for (c = '\0'; s[c] != 0; c++)
	{
	}
	d = 0;
	for (c = c - 1; d < c; d++)
	{
		character = s[c];
		s[c] = s[d];
		s[d] = character;
		c--;
	}
}
