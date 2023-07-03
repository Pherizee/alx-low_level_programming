#include "main.h"

/**
 * _memset - sets the first n bytes of a memory area pointed
 * by s to a constant b
 *
 * @s: memory address to be changed
 * @b: character to fill memory with
 * @n: number of memory addresses to fill
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *mem = s;

	while (n--)
	{
		*s++ = b;
	}

	return (mem);
}

