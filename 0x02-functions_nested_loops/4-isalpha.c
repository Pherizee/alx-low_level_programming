#include "main.h"

/**
 * _isalpha- function checks if the input is an alphabet
 * @c: unsigned input char
 * Return: 1 if alphabet and 0 if not
 */

int _isalpha(int c)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == c)
			return (1);
	}

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		if (c == alpha)
			return (1);
	}
	
	return (0);
}
