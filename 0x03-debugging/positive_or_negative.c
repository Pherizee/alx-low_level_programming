#include <stdio.h>

/**
 * print_sign - prints the sign of an input
 * @n: int input
 * Return:
 * 1 if positive
 * 0 if 0
 * -1 if negative
 */
void positive_or_negative(int n)
{
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
}
