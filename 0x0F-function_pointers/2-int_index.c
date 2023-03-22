#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer
 * @array: the array to search
 * @size: the size of the array
 * @cmp: a function to be used to compare values
 *
 * Return: ptr to first index, -1 (no element matches) or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
