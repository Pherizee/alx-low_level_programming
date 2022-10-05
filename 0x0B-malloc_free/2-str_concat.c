#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1, len2, size;
	char *new = NULL;

	if (s1 == NULL)
		s1 = '';

	if (s2 == NULL)
		s2 = '';

	for (len1 = 0; *s1 != '\0'; s1++)
		len1++;

	for (len2 = 0; *s2 != '\0'; s2++)
		len2++;

	size = len1 + len2;
	new = malloc((sizeof(char) * size) + 1);
	s1 -= len1;
	s2 -= len2;

	if (new == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		new[i] = *s1;
		s1++;
	}

	for (; i < size; i++)
	{
		new[i] = *s2;
		s2++;
	}
	new[i] = '\0';

	return (new);
}
