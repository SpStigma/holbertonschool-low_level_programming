#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: prefix
 *
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int count = 0;

	while (s[i] != '\0' && accept[count] != '\0')
	{
		if (s[i] == accept[count])
		{
			count++;
		}
		i++;
	}
	return (count);
}
