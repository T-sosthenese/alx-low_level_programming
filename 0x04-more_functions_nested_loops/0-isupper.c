#include "main.h"
/**
 * _isupper - checks for uppercase characters
 * @c: character to be checked for uppercase
 * Return: 1 (uppercase), 0 (otherwise
 */
int _isupper(int c)
{
	if (c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
