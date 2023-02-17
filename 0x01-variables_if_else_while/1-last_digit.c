#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Determines the digit of a number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	int LastDigt = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;i
	if (LastDigt > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, LastDigt);
	else if (LastDigt == 0)
		printf("Last digit of %d is %d and is 0\n", n, LastDigt);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LastDigt);
	return (0);
}
