#include <ctype.h>

/**
 * _isupper - function to check if input is uppercase
 * @c: char input
 * Return:
 * 1 if uppercase
 * 0 if not
 */

int _isupper(int c)
{
	int resp;

	resp = isupper(c);
	if (resp != 0)
		return (1);
	else
		return (0);
}
