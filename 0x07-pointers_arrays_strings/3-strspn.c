#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: memory address to be checked
 * @accept: memory checking criteria
 *
 * Return: the number of bytes in the initial segment of 's'
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c;
	char *mem = accept;

	c = 0;

	for (; *s != '\0'; s++)
	{
		for (accept = mem; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				c++;
				break;
			}
			else if ((c > 0) && (*(accept + 1) == '\0'))
				return (c);
		}
	}

	return (c);
}

