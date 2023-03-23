#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - prints strings into the stdout
 * @separator: the separating characters
 * @n: the number of arguments
 * @...: unsepcified arguments
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;

	unsigned int i;

	char *str;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg_list, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(arg_list);
	printf("\n");
}
