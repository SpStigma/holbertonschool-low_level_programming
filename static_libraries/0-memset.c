#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: pointer s
 * @b: constant bytes
 * @n: the number of bytes to fill
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}

	return (s);
}
