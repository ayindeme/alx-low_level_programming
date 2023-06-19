#include <stdio.h>
/**
 * main - prints lower case alphabet in reverse order
 *followed by a newline
 * Return: always (0);
 *
 */
int main(void)
{
	char	alphabet;

	for	(alphabet	=	'z';	alphabet	>=	'a';	alphabet--)
	{
	putchar(alphabet);
	}
	putchar('\n');
	return	(0);
}
