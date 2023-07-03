#include "main.h"

/**
 * _memcpy - copy 'n' bytes from memory area 'src' to memory area 'dest'
 *
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to be copied
 *
 * Return: address of dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *mem = dest;

	while (n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (mem);
}

