#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main function
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Returns 0 when program is successful
 */
int main(int argc, char *argv[])
{
	int change, cents;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
		printf("0\n");
	while (change >= 25)
	{
		change = change - 25;
		cents = cents + 1;
	}
	while (change >= 10)
	{
		change = change - 10;
		cents = cents + 1;
	}
	while (change >= 5)
	{
		change = change - 5;
		cents = cents + 1;
	}
	while (change >= 2)
	{
		change = change - 2;
		cents = cents + 1;
	}
	while (change >= 1)
	{
		change = change - 1;
		cents = cents + 1;
	}
	printf("%d\n", cents);
	return (0);
}
