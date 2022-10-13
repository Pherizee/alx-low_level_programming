#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for the index of an integer
 *
 * @array: array to be searched
 * @size: size of array
 * @cmp: function pointer for comparison
 *
 * Return: int index of first true comparison or -1 on failure
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size < 1)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
