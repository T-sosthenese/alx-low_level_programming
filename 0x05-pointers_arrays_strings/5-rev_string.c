#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - reverses string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = 9;

	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
