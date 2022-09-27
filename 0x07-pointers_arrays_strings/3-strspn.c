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
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
			else if (c > 0 && accept[j + 1] == '\0')
				return (c);
		}
	}

	return (c);
}
