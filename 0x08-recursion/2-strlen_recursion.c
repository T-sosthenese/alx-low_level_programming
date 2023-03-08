#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - counts the length of a string
 * @s: string to be couted
 * Return: n
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
