#include <ctype.h>

/**
 * _islower - checks if a character is lowercase
 * @c: unsigned input char
 * Return: 1 if lowercase and 0 if not
 */
int _islower(int c)
{
	int out;

	out = islower(c);

	if (out > 0)
		return (1);
	else
		return (0);
}
