#include "main.h"
/**
 * print_sign - checks sign and returns 1, 0, or -1
 * @n: the number to be checked
 * Return: 1 (is greater than zero), 0 (is zero), -1 (is less than zero)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
