#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memory allocated to dog
 *
 * @d: structure for dog info
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
