#include "main.h"

/**
 * get_endianness - gets the endianness of a variable
 *
 * Return: integer of the variable
 */

int get_endianness(void)
{
	int m = 1;

	char *p = (char *)&m;

	return ((int)*p);
}
