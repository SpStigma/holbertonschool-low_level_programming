#include "main.h"

/**
 * print_alphabet_x10 - print the ten first letter of alphabet
 */

void print_alphabet_x10(void)
{
	char mid;
	int i;

	for (i = 0 ; i < 9 ; i++)

		for (mid = 'a' ; mid <= 'z' ; mid++)
		{
			_putchar(mid);
			_putchar('\n');
		}
}
