#include "main.h"
#include <stdio.h>
/**
 * print_square - prints squares
 * @size: the size of the square to be printed
 */
void print_square(int size)
{
	int i;

	int j;

	i = 0;
	if (size <= 0)
	{
		putchar('\n');
	}
	while (i < size && size > 0)
	{
		j = 0;
		while (j < size && size > 0)
		{
			putchar('#');
			j++;
		}
		i++;
		putchar('\n');
	}
}
