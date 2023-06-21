#include "main.h"

/**
 * print_square - display a square
 * @size: nombre de fois #
 */

void print_square(int size)
{
	int l;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (l = 0 ; l < size ; l++)
	{
		for (c = 0 ; c < size ; c++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}


