#include <stdlib.h>

/**
 * _realloc - reallocate a memory block
 *
 * @ptr: old memory block
 * @old_size: old memory block size
 * @new_size: new memory size
 *
 * Return: pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr, *cpy_ptr;

	if (ptr == NULL) /* just malloc(new_size) */
	{
		new_ptr = (malloc(new_size));
		if (new_ptr == NULL)
			return (NULL);
		free(ptr);
		return (new_ptr);
	}

	if (new_size == 0 && ptr) /* free ptr */
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size) /* only return ptr */
		return (ptr);

	new_ptr = malloc(new_size);
	cpy_ptr = ptr;
	if (new_ptr == NULL)
		return (NULL);

	if (new_size < old_size)
		old_size = new_size;

	for (i = 0; i < old_size; i++)
	{
		if (cpy_ptr[i])
			new_ptr[i] = cpy_ptr[i];
	}
	
	free(ptr);
	return (new_ptr);
}
