#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: print number in binary
 */
void print_binary(unsigned long int n)
{
	int j;
	int found_one = 0;

	for (j = 63; j >= 0; j--)
	{
		unsigned long int mask = 1UL << j;

		if (n & mask)
		{
			_putchar('1');
			found_one = 1;
		}
		else if (found_one)
		{
			_putchar('0');
		}
	}

	if (!found_one)
		_putchar('0');
}
