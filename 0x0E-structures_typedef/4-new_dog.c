#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog with information
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len, owner_len, i;
	char *name_cpy, *owner_cpy;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	name_len = 0;
	owner_len = 0;

	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;
	name_cpy = malloc(name_len + 1);
	owner_cpy = malloc(owner_len + 1);

	if (name_cpy == NULL)
		return (NULL);
	if (owner_cpy == NULL)
		return (NULL);
	for (i = 0; i < name_len; i++)
		name_cpy[i] = name[i];
	name_cpy[i] = '\0';
	for (i = 0; i < owner_len; i++)
		owner_cpy[i] = owner[i];
	owner_cpy[i] = '\0';

	dog->name = name_cpy;
	dog->age = age;
	dog->owner = owner_cpy;
	return (dog);
}
