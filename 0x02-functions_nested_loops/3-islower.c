#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: unsigned input char
 * Return: 1 if lowercase and 0 if not
 */
int _islower(int c)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == c)
			return (1);
	}
	return (0);
}
