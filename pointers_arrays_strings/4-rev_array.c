#include "main.h"

/**
 * reverse_array - reverse l'ordre ds l'array
 * @a: array
 * @n: nombre ds l'array
 */

void reverse_array(int *a, int n)
{
	int debut = 0;
	int fin = n - 1;
	int temp;

	while (debut < fin)
	{
		temp = a[debut];
		a[debut] = a[fin];
		a[fin] = temp;

		debut++;
		fin--;

	}
}
