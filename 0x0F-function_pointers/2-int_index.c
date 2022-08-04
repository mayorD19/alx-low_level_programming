#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: The array paramter passed
 * @size: The size of the array
 * @cmp: The function pointer being accessed
 * Return: cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);
	
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
