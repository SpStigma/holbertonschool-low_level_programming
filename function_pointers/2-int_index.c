#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -  function that searches for an integer.
 * @array: to search
 * @size: taille
 * @cmp: pointer to the funcction to be used to compare values
 *
 * Return: i if found else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	/* Classique check la condition */
	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	/*Check to all elements */
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	/* if no element found */
	return (-1);
}
