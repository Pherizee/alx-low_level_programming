#include <ctype.h>

/**
 * _isalpha- function checks if the input is an alphabet
 * @c: unsigned input char
 * Return: 1 if alphabet and 0 if not
 */
int _isalpha(int c)
{
	int out;

	out = isalpha(c);

	if (out != 0)
		return (1);
	else
		return (0);
}
