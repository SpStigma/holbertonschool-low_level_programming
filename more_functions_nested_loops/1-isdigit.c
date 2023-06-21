#include "main.h"

/**
 * _isdigit - indique si le nombre est un digit
 *@c: le nombre a tester
 *
 * Return: 1 le nombre est un digit 0 autre chose
 */

int _isdigit(int c)
{
	if ( c <= 9 )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
