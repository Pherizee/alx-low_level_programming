#include "main.h"

/**
 * _strcpy - copy string pointed to by src, including
 * the termination null byte (\0) to the buffer pointed
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

	retVal = dest;

	while (*src)
		*dest++ = *src++;

	*dest++ = '\0';

	return (retVal);
}
