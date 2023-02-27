#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: The string reversed by the function
 *
 * Return: Returns Nothing
 */
void rev_string(char *s)
{
	int i;
	int len;
	int temp;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
