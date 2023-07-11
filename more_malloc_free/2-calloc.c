#include "main.h"
#include <stdlib.h>

/**
 * _calloc - calloc fct
 * @nmemb: array
 * @size: taille
 *
 * Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total = nmemb * size;
	unsigned char *ptr = NULL;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}

	ptr = malloc(total);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
