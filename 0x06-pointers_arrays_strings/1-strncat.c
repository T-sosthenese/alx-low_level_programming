#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes from src to be used
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	int dest_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
