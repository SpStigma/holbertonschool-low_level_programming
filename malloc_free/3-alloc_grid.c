#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: largeur
 * @height: hauteur
 *
 * Return: Grid
 */

int **alloc_grid(int width, int height)
{
	int i, row, column;
	int **grid = NULL;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (row = 0; row < height; row++)
		for (column = 0; column < width; column++)
			grid[row][column] = 0;


	return (grid);
}
