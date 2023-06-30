#include "main.h"

/**
 * _strcat - function to concatenate 2 strings
 * @dest: initial string
 * @src: string to be concatenated
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (tmp);
}
