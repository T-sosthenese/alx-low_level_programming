#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers on the screen
 * @separator: the separating character for integers
 * @n: the number of arguments passed
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list arg_list;

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg_list, int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
