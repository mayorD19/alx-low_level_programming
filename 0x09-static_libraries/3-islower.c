#include <stdio.h>
#include "main.h"

/**
 * _islower - A function that checks if it is in lowercase
 *
 * @c: Using the int c to check if it is in lowercase
 * Return: 0
 */
int _islower(int c)
{
        if (c >= 'a' && c <= 'z')
        {
                return (1);
        }
        else
        {
                return (0);
        }
}

