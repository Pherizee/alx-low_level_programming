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
	int len1, len2, i, size;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	
	if ((int)n >= len2)
		n = len2;

	size = len1 + n;
	str = malloc(size + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		str[i] = *s1;
		s1++;
	}

	for (; i < size; i++)
	{
		str[i] = *s2;
		s2++;
	}
	str[i] = '\0';

	return (str);
}
