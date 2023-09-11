#include "search_algos.h"

/**
 * linear_search - Searches for a value using a linear algorithm
 * @array: Pointer to the array to be searched
 * @size: Size of the array being searched
 * @value: Integer to be searched in the array
 * Return: index of the value searched, otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
