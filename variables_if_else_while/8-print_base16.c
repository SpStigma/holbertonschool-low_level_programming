#include <stdio.h>

/**
 * main - hexadecimal
 * Return: to sucess
 */

int main(void)
{
	int hexa;

	for (hexa = 0 ; 0 < 10 ; hexa++)
	{
		putchar(hexa + '0');
	}

	for (hexa = 0 ; hexa < 6 ; hexa++)
	{
		putchar(hexa + 'a');
	}
	{
		putchar('\n');
	}
	return (0);
}
