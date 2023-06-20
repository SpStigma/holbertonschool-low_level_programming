#include "main.h"

/**
 * _isalpha - identify lower and upper case
 * @c: all character
 *
 * Return: to sucess if 1.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
