#include "main.h"
/**
 * positive_or_negative - Checks whether a number is positive or negative
 * @i: number to be checked
 * Return: 0 (Success)
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
}
