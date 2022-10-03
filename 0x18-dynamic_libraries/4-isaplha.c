#include <stdio.h>
#include "main.h"

/**
 * _isalpha - A function that checks for upper character
 *
 * @c: using the putchar to check alpha characters
 * Return: 0.
 */
int _isalpha(int c)
{
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
                return (1);
        }
        else
        {
                return (0);
        }
}

