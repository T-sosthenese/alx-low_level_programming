#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry of the program
 * @argc: counts the number of arguments
 * @argv: argument array
 * Return: 1 (error), 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	int j;

	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
