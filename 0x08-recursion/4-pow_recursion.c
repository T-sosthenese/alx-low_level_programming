#include "main.h"
/**
 * _pow_recursion - calculates the power of a number
 * @x: The base number
 * @y: The power
 * Return: -1 (y < 0), 1 (y == 0), x (y > 0)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
