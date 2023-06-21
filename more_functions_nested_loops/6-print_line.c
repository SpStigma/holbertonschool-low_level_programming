#include "main.h"

/**
 * print_line - nombre de fois pour mettre _
 *@n: la valeur a laquelle repeat tend
 *
 */

void print_line(int n)
{
	int repeat = 0;

	for (; repeat < n ; repeat++)
	{
		_putchar('_');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
