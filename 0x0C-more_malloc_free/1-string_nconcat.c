#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - concatenate two strings
 *
 * @s1: string1
 * @s2: string2
 * @n: number of bytes of s2 to be used
 *
 * Return: pointer to newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size, i;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = strlen(s1) + n;
	str = malloc(size + 1);

	if (str == NULL)
		return (NULL);

	while (*s1)
	{
		*str = *s1;
		str++;
		s1++;
	}

	for (i = 0; i < n; i++)
	{
		if (s2[i] == '\0')
			break;
		*str = s2[i];
		str++;
	}
	*str = '\0';
	str -= size;

	return (str);
}
