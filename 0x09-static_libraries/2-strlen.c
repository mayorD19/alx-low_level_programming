#include "main.h"
#include <stdio.h>

/**
 * _strlen - A function that counts the lenght of strings
 *
 * @s: the string inputed
 * Return: 0
 */
int _strlen(char *s)
{
        int i;

        i = 0;
        while (*s != '\0')
        {
                i++;
                s++;
        }
        return (i);
}

