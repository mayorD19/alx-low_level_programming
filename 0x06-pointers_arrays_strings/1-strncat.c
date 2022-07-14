#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: parmater for dest to
 * @src: parameter for src
 * @c: parameter for c
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int c)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < c)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}
