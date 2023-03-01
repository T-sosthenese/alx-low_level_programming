#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @src: the source string
 * @dest: the destination string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
