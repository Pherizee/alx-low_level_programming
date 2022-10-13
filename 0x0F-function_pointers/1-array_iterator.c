#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each elemnt of an array
 *
 * @array: array
 * @size: size of the array
 * @action: function pointer
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || action == NULL)
		return;

	if (size < 1)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
