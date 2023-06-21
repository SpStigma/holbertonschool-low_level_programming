#include "main.h"

/**
 * print_numbers - print 0 to 9
 */

void print_numbers(void)
{
	int n = '0';

	for (; n <= '9' ; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
