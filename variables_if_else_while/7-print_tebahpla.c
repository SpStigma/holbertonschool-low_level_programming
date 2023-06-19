#include <stdio.h>

/**
 * main - alphabet a l'envers
 * Return: to sucess
 */

int main(void)
{
	char reverse = 'z';

	for (; reverse >= 'a' ; reverse--)
	{
		putchar(reverse);
	}
	{
		putchar('\n');
	}
	return (0);
}
