#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _realloc - Reallocates a memory block.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for `ptr`.
 * @new_size: The new size in bytes of the new memory block.
 *
 * Return: If `new_size` is equal to `old_size`, returns `ptr`.
 * Otherwise, returns a pointer to the reallocated memory.
 * If `new_size` is zero, frees the memory block pointed to by `ptr`,
 * and returns NULL.
 * If `ptr` is NULL, the behavior is the same as a call to malloc
 * for `new_size`.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	memcpy(new_ptr, ptr, old_size > new_size ? new_size : old_size);

	free(ptr);

	return (new_ptr);
}
