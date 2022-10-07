#include <stdlib.h>

/**
 * array_range - creates array of integers
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ptr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; min++)
	{
		*(ptr + i) = min;
		i++;
	}
	return (ptr);
}
