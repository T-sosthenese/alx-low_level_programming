#include <stdio.h>

/**
 * main - prints the alphabet in lowercase (except for q and e)
 *
 * Return: Always 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
