#include "main.h"

/**
 * leet - encodes a string into leetspeek.
 * @n: pointer to input string.
 * Return: Returns pointer to leetspeek string.
 */
char *leet(char *n)
{
	int i, j;
	char subs[] = "aAeEoOtTlL";
	char le[] = "43071";

	i = 0;
	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; subs[j] != '\0'; j++)
			if (n[i] == subs[j])
				n[i] = le[j / 2];
	}
	return (n);
}
