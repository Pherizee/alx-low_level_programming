#include "main.h"

/**
 * _sqrt - find the natural square-root of a number
 *
 * @n: input number
 * @i: counter
 * Return: sqrt value or -1 is non existent
 */

int _sqrt(int n, int i)
{
	if ((n % i == 0) && (n / i == i))
		return (i);
	if ((n / i) < 2)
		return (-1);

	return (_sqrt(n, i + 1));
}


/**
 * _sqrt_recursion - find the natural square-root of a number
 *
 * @n: input number
 * Return: sqrt value or -1 is non existent
 */

int _sqrt_recursion(int n)
{
	int i;

	if (n <= 0)
		return (-1);

	i = 1;
	return (_sqrt(n, i));
}
