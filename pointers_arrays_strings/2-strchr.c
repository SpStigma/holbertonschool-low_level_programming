#include "main.h"

/**
 * *_strchr - Write a function that locates a character in a string.
 * @s: chaine de character
 * @c: caractère a trouver
 *
 * Return: to result
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
			
		i++;
	}
	else
	{
		return (NULL);
	}
}
