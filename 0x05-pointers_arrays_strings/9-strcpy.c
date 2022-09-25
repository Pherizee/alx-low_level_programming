#include "main.h"

/**
 * _strcpy - copy string pointed to by src, including
 * the termination null byte (\0) to the buffer ppointed
 * to by dest
 *
 * @src: source address
 * @dest: destination address
 *
 * Return: address to destination
 */

char *_strcpy(char *dest, char *src)
{
	char *retVal;
	int i, len;

	retVal = dest;

	while (src[len] != '\0')
		len++;

	for (i = 0; i <= len; i++)
		*(dest + i) = *(src + i);

	return (retVal);
}
