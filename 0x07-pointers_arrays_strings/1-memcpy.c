#include "main.h"
#include <string.h>
/**
 * _memcpy - copies a block of memory from a location to another
 * @dest: Destination of the array
 * @src: string to be copied
 * @n: The number of characters to copy
 *
 * Return: Returns the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
