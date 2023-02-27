#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - copies the string from src to dest
 * @dest: destination to copy string to
 * @src: source to copy string from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
