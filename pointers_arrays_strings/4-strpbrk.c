#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: strin a analyser
 * @accept: lettre a accepter
 *
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0; /* reset a chaque itération */
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
