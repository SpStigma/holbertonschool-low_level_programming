#include "main.h"

/**
 * *_strcat - fonction pour concatenate 2 strings
 * @dest: premier string
 * @src: 2ème string
 *
 * Return: show 2 sentence
 */

char *_strcat(char *dest, char *src)
{
	int lenght1 = 0;
	int lenght2 = 0;

	while (dest[lenght1] != '\0')
	{
		lenght1++;
	}
	while (src[lenght2] != '\0')
	{
		dest[lenght1] = src[lenght2];
		lenght2++;
		lenght1++;
	}
	dest[lenght1] = '\0';

	return (dest);
}
