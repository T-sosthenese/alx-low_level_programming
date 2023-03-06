#include "main.h"
#include <string.h>
/**
 * _strstr - Locates a substring
 * @haystack: string to be scannned
 * @needle: string containing the sequence of characters to match
 * Return: p
 */
char *_strstr(char *haystack, char *needle)
{
	char *p;

	p = strstr(haystack, needle);
	return (p);
}
