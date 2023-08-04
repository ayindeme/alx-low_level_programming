#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip
 * to get from one number to another.
 * @p: First number.
 * @q: Second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int p, unsigned long int q)
{
	unsigned long int xor_result = p ^ q;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}

