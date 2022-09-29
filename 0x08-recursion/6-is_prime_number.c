#include "main.h"

/**
 * is_prime_number - checks if number is a prime number
 *
 * @n: int input number
 * Return: 1 if true and 0 if false
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);

	return(is_prime(n, 3));
}

/**
 * is_prime - checks if number is a prime number
 *
 * @n: int input number
 * @i: counter
 * Return: 1 if true and 0 if false
 */

int is_prime(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);

	return (is_prime(n, i + 2));
}
