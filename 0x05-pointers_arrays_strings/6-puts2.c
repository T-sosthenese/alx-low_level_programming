#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts2 - prints string characters in long format
 * @str: string to be printed
 */
void puts2(char *str)
{
	int i;

	int len;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
