#include "main.h"
/**
 * _strlen - returns the length of string
 * @s: string to be returned
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
