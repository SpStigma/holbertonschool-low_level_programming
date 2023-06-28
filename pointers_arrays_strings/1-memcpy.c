#include "main.h"

/**
 * *_memcpy - function that copies memory area.
 * @dest: destination memory
 * @src: la source de la mémoire
 * @n: number of byte copied
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest = dest;
	char *ptr_src = src;

	while (n > 0)
	{
		*ptr_dest = *ptr_src;
		ptr_dest++;
		ptr_src++;
		n--;
	}
	return (dest);
}
