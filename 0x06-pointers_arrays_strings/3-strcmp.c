#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *  Return: negative (s1 < s2), 0 (si == s2), + (s1 > s2)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
