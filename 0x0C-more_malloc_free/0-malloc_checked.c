#include <stdlib.h>

/**
 * malloc_checked - allocate memmory using malloc
 *
 * @b: size of memory
 *
 * Return: void pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr =  malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
