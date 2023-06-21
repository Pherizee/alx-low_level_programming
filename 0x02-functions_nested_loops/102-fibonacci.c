#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 always
 */

int main(void)
{
	int c;
	unsigned long int fib, i, j;

	i = 1;
	j = 2;

	printf("%lu, ", i);
	printf("%lu, ", j);

	for (c = 0; c < 48; c++)
	{
		fib = i + j;
		printf("%lu", fib);

		if (c == 47)
			printf("\n");
		else
			printf(", ");
		i = j;
		j = fib;
	}

	return (0);
}
