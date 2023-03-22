#include "3-calc.h"

/**
 * op_add - Returns the sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the quotient of two numbers
 * @a: the number whose quotient is to be found
 * @b: the divisor
 *
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of a division process
 * @a: the number whose remainder is to be determined
 * @b: the divisor
 *
 * Return: the remainder when dividing a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
