#include "function_pointers.h"

/**
 * array_iterator - A function that takes an array as a parameter
 * @array: The array paramter passed
 * @size: The size of the array passed
 * @action: The function pointer
 * Return: action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t d;

	if (array != NULL && action != NULL)
	{
		for (d = 0; d < size; d++)
		{
			action(array[d]);
		}
	}
}
