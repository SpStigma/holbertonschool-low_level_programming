#include "main.h"

/**
 * _isupper - verifie si c uppercase
 * @c: character a chec
 *
 * Return: 1 upper 0 lower
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
