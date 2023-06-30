#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum des diagonale
 * @a: matrix
 * @size: taille de la matrixe
 *
 */

void print_diagsums(int *a, int size)
{
	int l = 0;
	int c = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (l < size)
	{
		sum1 += *(a + l * size + c);
		sum2 += *(a + l * size + (size - 1 - c));

		l++;
		c++;
	}
	printf("%d, %d\n", sum1, sum2);
}
