#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 always
 */

int main(void)
{
	int i, j, c;
	unsigned int fib;

	i = 1;
	j = 2;

	printf("%d, ", i);
	printf("%d, ", j);
	
	for (c = 0; c < 48; c++)
	{
		fib = i + j;
		if (c == 47)
			printf("%u\n", fib);
		else
			printf("%u, ", fib);
		i = j;
		j = fib;
	}

	return (0);
}
