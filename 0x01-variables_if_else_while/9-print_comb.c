#include <stdio.h>
/**
 * main - program that printcombination of single digit numbers.
 *
 * Return: always (0);
 *
 */
int main(void)
{
	int	a;

	for	(a	=	0;	a	<	10;	a++)
	{
	putchar('0'	+	a);
	if	(a	!=	9)
	{
	putchar(',');
	putchar(' ');
	}

	}
	return	(0);
}
