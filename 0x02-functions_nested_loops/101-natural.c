#include "main.h"
#include <stdio.h>

/**
 * main - print sum all multiples of 3 and 5 up to 1024
 *
 * Return: always 0
 */

int main(void)
{
	int i, sum;

	sum = 23;

	for (i = 10; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);
	return (0);
}
