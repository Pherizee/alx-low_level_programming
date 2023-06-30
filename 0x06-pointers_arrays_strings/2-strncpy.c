#include "main.h"

/**
 * _strncpy - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i;
	char *tmpdest = dest, *tmpsrc = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	/* to accomodate the null operator */
	srclen++;

	src = tmpsrc;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (tmpdest);
}
