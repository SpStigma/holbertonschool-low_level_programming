#include "main.h"

/**
 * *_strcpy - 
 * @dest: premier pointeur
 * @src: deuxieme pointeur
 *
 * Return: pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int lenght = 0;

	while (src[lenght])
	{
		dest[lenght] = src[lenght];
		lenght++;
	}

	dest[lenght] = '\0';

	return (dest);
}
