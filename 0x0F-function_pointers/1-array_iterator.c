#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 * @array: the array to be pointed
 * @size: The size of the array
 * @action: pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
