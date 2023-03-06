#include "main.h"
#include <string.h>
/**
 * _strpbrk - Locates characters in a string
 * @s: string to be scannned
 * @accept: String containing the characters to match
 *
 * Return: A pointer to char s that matches one in accept
 */
char *_strpbrk(char *s, char *accept)
{
	char *ret;

	ret = strpbrk(s, accept);
	return (ret);
}
