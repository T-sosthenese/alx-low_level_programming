#include "search_algos.h"

int binary_search_recursion(int *array, int value, size_t low, size_t high);

/**
 * binary_search_recursion - Helper function for advanced binary
 *				search algo.
 * @array: Pointer to the first element in the array to search
 * @value: Value to be searched for
 * @low: Starting index for the search
 * @high: terminating index for the search
 *
 * Return: Index containing value, -1 otherwise
 */

int binary_search_recursion(int *array, int value, size_t low, size_t high)
{
	size_t mid, i;

	if (array == NULL)
		return (-1);

	mid = (low + high) / 2;
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
		printf("%i%s", array[i], i == high ? "\n" : ", ");

	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[mid] < value)
			return (binary_search_recursion(array, value,
							mid + 1, high));
		if (array[mid] >= value)
			return (binary_search_recursion(array, value,
							low, mid));
	}
	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted arrayof integers
 *	using binary search algo. Unlike 'binary_search', this algo
 *	returns the first occurrence of value in array
 * @array: Pointer to the first element of array to be searched
 * @size: The size of the array
 * @value: The number to be searched for
 *
 * Return: First index of ocurrence of value, -1 otherwise
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL)
		return (-1);

	return (binary_search_recursion(array, value, low, high));
}
