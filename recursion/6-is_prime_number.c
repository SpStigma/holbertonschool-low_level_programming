#include "main.h"

/**
 * _prime - numbre prime
 * @divisor: divisor
 * @result: the divisor if it devides the number
 *
 * Return: to sucess the number is prime
 */

int _prime(int result, int divisor)
{
	if (divisor * divisor > result)
	{
		return (1);
	}
	else if (result % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (_prime(result, divisor + 1));
	}
}

/**
 * is_prime_number - to know if is a primal
 * @n: ,number to check
 *
 * Return: 1 id it is a primal
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime(n, 2));
}
