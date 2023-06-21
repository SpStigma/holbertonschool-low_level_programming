#include "main.h"

/**
 * print_diagonal - display a diagonal on the terminal
 * @n: longueur de la diagonale
 */

void print_diagonal(int n)
{
	int a;

	for (a = 0 ; a <= n ; a++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
