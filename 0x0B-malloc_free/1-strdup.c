#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given
 *
 * @str: given string
 *
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	int len, i;
	char *dup = NULL;

	if (!*str)
		return (NULL);

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}

	dup = malloc((sizeof(char) * len) + 1);
	str -= len;

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		dup[i] = *str;
		str++;
	}

	return (dup);
}
