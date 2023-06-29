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
	int i;
	int count;

	while (s[i] != '\0' && accept[i] != '\0')
	{
		if (s[i] == accept[i])
		{
			count++;
		}
		i++;
	}
	return (count);
}


