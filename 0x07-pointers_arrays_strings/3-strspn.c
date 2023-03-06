#include "main.h"
#include <string.h>

/**
 * _strspn - get span character set in string
 * @s: string to be scanned
 * @accept: the string containing the chars to match in s
 *
 * Return: Number of characters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = strspn(s, accept);
	return (i);
}
