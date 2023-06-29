#include "main.h"

/**
 * print_chessboard - affiche les pièce de chess
 * @a: tableau de 8
 */

void print_chessboard(char (*a)[8])
{
	int l = 0;
	int c = 0;

	for (l = 0 ; l < 8 ; l++)
	{
		for (c = 0 ; c < 8 ; c++)
		{
			_putchar(a[l][c]);
		}
		_putchar('\n');
	}
}
