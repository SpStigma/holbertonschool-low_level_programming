#include "main.h"

/**
 * print_triangle - affiche u, triangle
 *
 * Return: to sucess
 */

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0 ; i <= size ; i++)
	{
		for (j = 1 ; j <= i ; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
