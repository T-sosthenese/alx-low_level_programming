#include <stdio.h>

/**
 * main - prints single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
	a++;
	}
	putchar('\n');
	return (0);
}


