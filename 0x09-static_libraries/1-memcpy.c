#include "main.h"
/**
 * _memcpy - copies n bytes from the memory area src
 * to memory area dest
 * @src: source code to copy
 * @dest: paramater for destination to  copy to
 * @n: how many bytes to copy
 * Return: dest;
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int d;

        for (d = 0; d < n; d++)
        {
                dest[d] = src[d];
        }
        return (dest);
}
