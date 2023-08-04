#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number whose bit to clear.
 * @my_index: The my_index of the bit to clear (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int my_index)
{
	unsigned	long	int	bit_mask	=	1UL	<<	my_index;

	if (my_index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~bit_mask;

	return (1);
}

