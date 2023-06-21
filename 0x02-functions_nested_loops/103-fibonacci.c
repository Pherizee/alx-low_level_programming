#include <stdio.h>

/**
 * main - prints fibonacci series
 *
 * Return: 0 always
 */

int main(void)
{
	unsigned long int i, j, fib, sum;

	i = 1;
	j = 2;
	sum = 0;
	while (j < 4000000)
	{
		if (j % 2 == 0)
			sum += j;
		fib = i + j;
		i = j;
		j = fib;
	}

	printf("%lu\n", sum);
	return (0);
}
