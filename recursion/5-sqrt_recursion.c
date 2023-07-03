#include "main.h"

/**
 * _sqrt - fonction to found the square
 * @result: result of multiplier
 * @multiplier: to check the sqare of root
 *
 * Return: the sqare root 
 */

int _sqrt( int result, int multiplier)
{
	if (multiplier * multiplier == result)
	{
		return (multiplier);
	}
	else if (multiplier * multiplier > result)
	{
		return (-1);
	}
	else
	{
		return(_sqrt(result, multiplier + 1));
	}
}




/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number square to calculate
 *
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
