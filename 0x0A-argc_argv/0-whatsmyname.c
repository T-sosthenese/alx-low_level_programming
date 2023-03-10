#include "stdio.h"
#include <string.h>
/**
 * main - Entry of the program
 * @argc: The character counter
 * @argv: An array of characters
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		int i = 0;

		int len = 0;

		len = strlen(argv[0]);

		for (i = 0; i < len; i++)
		{
			putchar(argv[0][i]);
		}
		putchar('\n');
	}
	return (0);
}
