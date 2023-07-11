#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total = nmemb * size;
	unsigned int *ptr = NULL;
	unsigned int *byteptr = NULL;
	unsigned int i;

	  if (nmemb == 0 || size == 0) 
	  {
		  return (NULL);
	  }

	  ptr = malloc(total);

	  if (ptr != NULL)
	  {
		  byteptr = ptr;
		  for (i = 0; i < total; i++)
		  {
			  byteptr[i] = 0;
		  }
	  }
	  return (ptr);
}

