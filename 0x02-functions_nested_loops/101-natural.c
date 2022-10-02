#include "main.h"

/**
 * main - sum all multiples of 3 and 5 up to 1024
 *
 * Return: sum
 */

int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 3; i < 1024)
	{
		if ((i % 3 == 0) || (i % 5) == 0)
			sum += 1;
	}

	return (sum)
}
