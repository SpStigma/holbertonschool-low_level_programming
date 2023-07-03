#include "main.h"

/**
 * factorial -  function that returns the factorial of a given number.
 * @n: nombre à factoriel
 *
 * Return: -1 if < 0 , ==0 a 1, reste factioriel
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
