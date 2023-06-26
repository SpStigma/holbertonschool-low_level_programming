#include "main.h"

/**
 * swap_int - inverser 2 entiers
 * @a: premier entier
 * @b: deuxième entier
 *
 * Return: to sucess
 */

void swap_int(int *a, int *b)
{
	int temporaire = 0;

	temporaire = *a;
	*a = *b;
	*b = temporaire;
}
