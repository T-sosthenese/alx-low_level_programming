#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array using binary algo
 * @array: Pointer to the first element to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: The index where the 'value' is located, (-1) otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t mid;
	size_t left = 0;
	size_t right = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i >= left && i < right)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
