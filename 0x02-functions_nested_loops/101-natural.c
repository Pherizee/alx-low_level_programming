#include "main.h"
#include <stdio.h>

/**
 * main - sum all multiples of 3 and 5 up to 1024
 *
 * Return: sum
 */

int main(void)
{
	int i, sum;

	sum = 0;

	for (i = 3; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5) == 0)
			sum += i;
	}

	printf("%\n", sum);
}
