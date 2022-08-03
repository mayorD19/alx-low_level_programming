#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - A function that prints name
 * @name: A name parameter
 * @f: A pointer to a function
 * Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
