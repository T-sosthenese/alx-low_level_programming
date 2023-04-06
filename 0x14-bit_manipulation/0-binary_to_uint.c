#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to the string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars in
 * the string b that is not 0 or 1 or if b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	int len = 0;

	if (b[len] == '0')
	{
		return (0);
	}
	while ((b[len] == '0') || (b[len] == '1'))
	{
		result <<= 1;
		result += b[len] - '0';
		len++;
	}
	return (result);
}
