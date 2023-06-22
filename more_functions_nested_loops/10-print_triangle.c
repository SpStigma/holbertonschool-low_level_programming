#include "main.h"

/**
 * print_triangle - affiche u, triangle
 * @size: taille du triangle
 *
 * Return: to sucess
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1 ; i <= size ; i++)
	{
		for (j = 1 ; j <= size - i ; j++)
		{
			_putchar(' ');
		}
		for (j = 1 ; j <= i ; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
