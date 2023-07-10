#include "main.h"
#include <stdlib.h>

/**
 * create_array - allocation dynamique d'une array
 * @size: taille de l'array
 * @c: string
 *
 * Return: to sucess
 */

char *create_array(unsigned int size, char c)
{
	char *str = NULL;
	unsigned int i;

	str = (char *)malloc(sizeof(char) * size);

	if (size == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
