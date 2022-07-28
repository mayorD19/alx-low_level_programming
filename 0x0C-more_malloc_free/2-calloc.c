#include "main.h"
#include <stdlib.h>

/**
  * _calloc - ...
  * @numofmemb: number of members
  * @size: size
  *
  * Return: ...
  */
void *_calloc(unsigned int numofmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *p;

	if (numofmemb == 0 || size == 0)
		return (NULL);

	l = numofmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	while (i < l)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
