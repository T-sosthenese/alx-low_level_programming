#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - print diagnal line
 * @n: size of diagnal line
 */
void print_diagonal(int n)
{
	int i;

	int j;

	if (n <= 0)
	{
		putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}

