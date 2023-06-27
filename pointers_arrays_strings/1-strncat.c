#include "main.h"

/**
 * *_strncat - function that concatenates two strings.
 * @dest: premier string
 * @src: deuxième string
 * @n: a ou s'arrreter
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int lenght = 0;

	while (dest[lenght] != '\0')
	{
		lenght++;
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[lenght + 1] = src[i];
	}
	dest[lenght + i] = '\0';
	return (dest);
}
