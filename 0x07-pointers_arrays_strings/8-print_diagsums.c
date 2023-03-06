#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of diagonals
 * @a: array
 * @size: size of array
 *
 * Return: return nothing
 */
void print_diagsums(int *a, int size)
{
	int sum_left = 0, sum_right = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		sum_left = sum_left + a[(size + 1) * i];
	}

	j = size - 1;

	for (i = 1; i <= size; i++)
	{
		sum_right = sum_right + a[i * j];
	}
	printf("%d, %d\n", sum_left, sum_right);
}
