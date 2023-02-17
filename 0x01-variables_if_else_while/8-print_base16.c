#include <stdio.h>

/**
 * main - prints hexadecimal numbers up to 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = '0';

	char d = 'a';

	while (c <= '9')
	{
		putchar(c);
	c++;
	}
	while (d <= 'f')
	{
		putchar(d);
	d++;
	}
	putchar('\n');
	return (0);
}
