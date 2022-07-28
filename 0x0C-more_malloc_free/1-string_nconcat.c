#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenate two strings up to n bytes.
 * @d1: source string
 * @d2: string to truncate up to n bytes
 * @n: number of bytes to truncate by
 * Return: pointer to new buffer
 */
char *string_nconcat(char *d1, char *d2, unsigned int n)
{
	char *p;
	unsigned int s1count, s2count, sizeBuffer, i;

	if (d1 == NULL)
		d1 = "";
	if (d2 == NULL)
		d2 = "";
	for (s1count = 0; d1[s1count]; s1count++)
		;
	for (s2count = 0; d2[s2count]; s2count++)
		;
	s2count > n ? (s2count = n) : (n = s2count);
	sizeBuffer = s1count + s2count + 1;
	p = malloc(sizeBuffer * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < sizeBuffer - 1; i++)
		i < s1count ? (p[i] = d1[i]) : (p[i] = d2[i - s1count]);
	p[sizeBuffer] = '\0';
	return (p);
}
