#include <stdio.h>

/**
 * _strpbrk - function locates the first occurrence in the string s of any
 * of the bytes in the string accept
 *
 * @s: string to be checked
 * @accept: substring used to check
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *mem = accept;

	while (*s)
	{
		accept = mem;
		while (*accept)
		{
			if (*s == *accept)
			return (s);
			accept++;
		}
		s++;
	}

	return (NULL);
}

