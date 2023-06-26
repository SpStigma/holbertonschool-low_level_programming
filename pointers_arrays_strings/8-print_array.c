#include "main.h"
#include <stdio.h>

/**
 * print_array - print
 * @a: array
 * @n: nombre de donnée stockée ds array
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d, ", a[i]);
	}

	printf("\n");
}
