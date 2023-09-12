#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using jump sort algo
 * @array: Pointer to the first element in the array to be searched
 * @size: The size of array to be searched
 * @value: The value to be searched
 * Return: The index of the value, (-1) otherwise
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t i = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (i * step <= size)
	{
		if (array[i * step] < value)
		{
			printf("Value checked array[%lu]", i * step);
			printf("= [%i]\n", array[i * step]);
			i++;
			if (i != 0)
				prev = i - 1;
		}
		else
		{
			printf("Value found between ");
			printf("indexes [%lu] ", prev * step);
			printf("and [%lu]\n", i * step);
			prev = prev * step;
			while (prev <= i * step)
			{
				printf("Value checked array[%lu] ", prev);
				printf("= [%i]\n", array[prev]);
				if (array[prev] == value)
					return (prev);
				prev++;
			}
			return (-1);
		}
	}
	printf("Value found between indexes [%lu] ", prev * step);
	printf("and [%lu]\n", i * step);
	printf("Value checked array[%lu] ", prev * step);
	printf("= [%i]\n", array[prev * step]);
	return (-1);
}
