#include "main.h"
/**
 * swap_int - swaps the value of integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;

	*b = tmp;

}
