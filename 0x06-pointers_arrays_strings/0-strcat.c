#include "main.h"

/**
 * *_strcat - A function to conacatenate two strings
 * @src: Parameter to a src
 * @dest: Parameter to append
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}
