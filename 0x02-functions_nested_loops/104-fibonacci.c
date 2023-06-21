#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 always
 */

int main(void)
{
	int c;
	double fib, i, j;

	i = 1;
	j = 2;

	printf("%.0f, ", i);
	printf("%.0f, ", j);

	for (c = 0; c < 96; c++)
	{
		fib = i + j;
		if (c == 95)
			printf("%.0f\n", fib);
		else
			printf("%.0f, ", fib);
		i = j;
		j = fib;
	}

	return (0);
}
