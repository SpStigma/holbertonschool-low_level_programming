#include "main.h"
#include <stdio.h>

/**
 * *_strchr - Write a function that locates a character in a string.
 * @s: chaine de character
 * @c: caractère a trouver
 *
 * Return: to result
 */

char *_strchr(char *s, char c)
{
	if (c == '\0')
	{
		return ("");
	}
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
