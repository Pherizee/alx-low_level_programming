#include <stdio.h>

/**
 * _islower - function to check for lowercase characters
 * @c: letter to be checked
 * Return: 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
