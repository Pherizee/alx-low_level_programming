#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory for 2 dimensional array
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to the 2D array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array == NULL)
		{
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}

	return (array);
}
