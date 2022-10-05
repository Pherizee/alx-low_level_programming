#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 *
 * @grid: 2D array to be freed
 * @height: height of array
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	free(grid);
	for (i = 0; i < height; i++)
		free(grid[i]);
}
