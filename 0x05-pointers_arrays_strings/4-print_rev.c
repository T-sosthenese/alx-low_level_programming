#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: string to be printed in reverse
 */
void print_rev(char *s)
{
	int len = strlen(s);

	int i = len - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
