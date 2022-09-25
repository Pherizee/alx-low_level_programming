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
	int len = 0;

	retVal = dest;

	while (*src)
	{
		*dest++ = *src++;
		len++;
	}
	*dest++ = '\0';

	return (retVal);
}
