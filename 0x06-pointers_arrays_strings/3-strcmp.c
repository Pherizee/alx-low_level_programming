#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: the first string to compare
 * @s2: the second string
 * Return: -1 if s1 < s2, 0 if s1 == s2, and 1 if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);

		s1++, s2++;
	}

	return (*s1 - *s2);
}
