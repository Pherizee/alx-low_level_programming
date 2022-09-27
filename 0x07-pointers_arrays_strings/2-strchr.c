#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: string memory location
 * @c: character to be found
 *
 * Return: pointer to first occurrence of character or "NULL" is not found.
 */

char *_strchr(char *s, char c)
{
	char *mem;

	while (*s != '\0')
	{
		if (*s == c)
		{
			mem = s;
			break;
		}
		s++;
	}
	return (mem);
}
