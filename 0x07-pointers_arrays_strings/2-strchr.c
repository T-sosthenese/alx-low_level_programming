#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - Locates first occurance of character in a string
 * @s: string
 * @c: character
 *
 * Return: pointer to the first occurance of the character in str
 */
char *_strchr(char *s, char c)
{
	char *p;

	p = strchr(s, c);
	return (p);
}
