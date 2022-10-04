#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 *
 * @size: size of array
 * @c: specific char to be initialized with
 *
 * Return: pointer to the array and NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str = malloc(size);

	if (size == 0)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
