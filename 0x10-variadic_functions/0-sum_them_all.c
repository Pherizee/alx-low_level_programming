#include <stdarg.h>

/**
 * sum_them_all - sums all its parameters
 *
 * @n: number of parameters
 * Return: sum of parameters or 0 if none
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	va_start(args, n);
	sum = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	return (sum);
}
