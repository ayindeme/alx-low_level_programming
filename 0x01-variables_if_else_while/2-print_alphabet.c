#include <stdio.h>
/**
 * main - print alphabet in lower case a-z
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char	j	=	'a';

	while	(j	<=	'z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return	(0);
}
