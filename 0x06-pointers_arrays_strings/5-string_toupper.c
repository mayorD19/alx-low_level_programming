#include "main.h"
/**
 * string_toupper - converts all lowercase letters of a string to uppercase.
 * @d: pointer to the string to convert
 * Return: the converted string.
 */
char *string_toupper(char *d)
{
	int i;

	i = 0;
	while (d[i] != '\0')
	{
		if (d[i] >= 'a' && d[i] <= 'z')
			d[i] -= 'a' - 'A';
		i++;
	}
	return (d);
}
