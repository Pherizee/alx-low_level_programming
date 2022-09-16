#include <ctype.h>

/**
 * _isdigit - function to check if input is a digit
 * @c: int input
 * Return:
 * 1 if digit
 * 0 if not
 */

int _isdigit(int c)
{
	int resp;

	resp = isdigit(c);
	if (resp != 0)
		return (1);
	else
		return (0);
}
