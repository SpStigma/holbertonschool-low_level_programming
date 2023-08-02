#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: nbr to be representation binary
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int i = 0;

		for (; i < sizeof(unsigned long int) * 8; i++)
		{
			putchar((n & mask) ? '1' : '0');
			mask >>= 1;
		}
	putchar('\n');
}
