#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
void _strcpy(char *src_str, int src_len, char *dest_str);

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
	int name_len, owner_len;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	dog->name = malloc(name_len + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	_strcpy(name, name_len, dog->name);

	dog->owner = malloc(owner_len + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	_strcpy(owner, owner_len, dog->owner);

	dog->age = age;

	return (dog);
}

/**
 * _strlen - count number of characters in string
 *
 * @str: string
 * Return: number of characters
 */

int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;

	return (i);
}

/**
 * _strcpy - copy string to a new destination
 *
 * @src_str: source string
 * @dest_str: destination string
 * @src_len: length of source
 * Return: nothing
 */

void _strcpy(char *src_str, int src_len, char *dest_str)
{
	int i;

	i = 0;
	while (i < src_len)
	{
		dest_str[i] = src_str[i];
		i++;
	}

	dest_str[i] = '\0';
}
