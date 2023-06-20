#include "main.h"

/**
 * _abs - donne la valeur absolue c est a dire la distande du nombre est de 0
 * @number: tout les nombres
 *
 * Return: la valeur absolue
 */

int _abs(int number)
{

	if (number < 0)
	{
		return (number * -1);
	}
	return (number);
}
