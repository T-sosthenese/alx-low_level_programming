#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * @str: The string to be duplicated
 * Return: NULL (str == 0), str
 */
char *_strdup(char *str)
{
	char *duplicate = malloc((strlen(str) + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}
