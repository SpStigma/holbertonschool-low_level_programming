#include "main.h"

/**
 * print_diagonal - display a diagonal on the terminal
 * @n: longueur de la diagonale
 */

void print_diagonal(int n)
{
	int a;
	int spaces;

	if (n <= 0)
       	{
		_putchar('\n');
		return;
	}

	for (int a = 0; a < n; a++)
       	{
		for (spaces = 0; spaces < a; spaces++)
	       	{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
