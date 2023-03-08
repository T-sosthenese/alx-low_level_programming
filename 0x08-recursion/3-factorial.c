#include "main.h"
/**
 * factorial - calculates the factorial of a number
 * @n: the factorial of a number
 * Return: n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
	return (1);
	}
}
