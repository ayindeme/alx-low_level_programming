#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 for big endian, 1 for little endian.
 */
int get_endianness(void)
{
	unsigned int value_for_check = 1;
	char *endian_check = (char *)&value_for_check;

	if (*endian_check)
		return (1);
	else
		return (0);
}

