#include "main.h"

/**
 * print_binary - converts binary to decimal
 * @n: the number to print
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	int i;

	for (i = 0; i < (int)sizeof(unsigned long int) * 8 - 1; i++)
	{
		if ((n >> ((int)sizeof(unsigned long int) * 8 - 1 - i)) & mask)
		{
			break;
		}
	}
	for (; i < (int)sizeof(unsigned long int) * 8; i++)
	{
		if ((n >> (int)(sizeof(unsigned long int) * 8 - 1 - i)) & mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
