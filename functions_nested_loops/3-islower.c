#include "main.h"

/**
 * _islower - shows if it is a lowercase
 * @c: the charactere to check
 *
 * Return: if it is a lower or a upper
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
