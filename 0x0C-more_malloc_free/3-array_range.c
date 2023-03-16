#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minium integer
 * @max: the maximum integer
 * Return: ptr to array, otherwise, NULL
 */

int *array_range(int min, int max)
{
	int *arr;

	int i;

	int size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
