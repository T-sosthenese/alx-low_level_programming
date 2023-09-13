#include "search_algos.h"

int binary_search_helper(int *array, int value, size_t low, size_t high);
size_t min(size_t a, size_t b);

/**
 * min - Returns the minimum of two sets of values
 * @a: First number
 * @b: Second number
 *
 * Return: Minimum of the two numbers
 */

size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * binary_search_helper - Searches for a value in using
 *	the binary search algorithm
 * @array: Pointer to the first element in the array to search
 * @value: The number being looked for
 * @low: The starting index for the search
 * @high: The ending index for the search
 *
 * Return: Index where the value was found, -1 otherwise
 */

int binary_search_helper(int *array, int value, size_t low, size_t high)
{
	size_t mid, i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%i%s", array[i], i == high ? "\n" : ", ");
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return ((int)mid);
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of
 *			integers using exponential search algorithm
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index containing the value, -1 otherwise
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, bound = 1;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
			bound, array[bound]);
		bound *= 2;
	}
	low = bound / 2;
	high = min(bound, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_search_helper(array, value, low, high));
}
