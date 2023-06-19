#include <stdio.h>
/**
 *main - program that prints all numbers of base 16 in lower case
 *
 * Return: always (0);
 *
 */
int main(void)
{
	int digit;

	for	(digit	=	0;	digit	<	16;	digit++)
	{
		if	(digit	<	10)
		{
		putchar('0'	+	digit);
		}
		else
		{
		putchar('a'	+	digit		-	10);
		}
	}
	putchar('\n');
	return	(0);
}
