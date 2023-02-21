#include "main.h"
/**
 * print_alphabet - entry
 * prints lowercase alphabet
 * Return: nothing
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
