
#include "main.h"

/**
 * rot13 - encodes a string by rotating the characters 13 spaces.
 * @n: pointer to input string.
 * Return: Returns pointer encoded string.
 */
char *rot13(char *n)
{
	int i, j;
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char boolean;

	for (i = 0; n[i] != '\0'; i++)
	{
		boolean = 0;
		for (j = 0; alpha[j] != '\0' && boolean == 0; j++)
		{
			if (n[i] == alpha[j])
			{
				n[i] = r[j];
				boolean = 1;
			}
		}
	}
	return (n);
}
