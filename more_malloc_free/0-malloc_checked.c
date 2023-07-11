#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - malloc check
 * @b: number ti multiply
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = NULL;
	 ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
