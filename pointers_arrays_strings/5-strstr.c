#include "main.h"

/**
 * *_strstr - function that locates a substring
 * @haystack: the strinf to analuyse
 * @needle: the part to be search in haystack
 *
 * Return: if found return needle else returne NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (haystack[i] != '\0')
	{
		i = 0;

		while (needle[i] != '\0' && haystack[i] == needle[i])
		{
			i++;

			if (needle[i] == '\0')
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (0);
}
