#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 0 to 14 ten times
 */
void more_numbers(void)
{
	int n;

	int i;

	i = 0;
	while (i <= 9)
	{
		n = 0;
		while (n <= 14)
		{
			if (n < 10)
			{
				putchar(n + '0');
			}
			else
			{
				putchar(n / 10 + '0');
				putchar(n % 10 + '0');
			}
			n++;
		}
		i++;
		putchar('\n');
	}

}
