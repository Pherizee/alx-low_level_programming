#include <stdio.h>
#include "main.h"

/**
 * main - prints prime factors of numbers
 * Return: 0 always
 */

int main(void)
{
	unsigned long int i, primeNum;
	unsigned long int num = 612852475143;

	while (num % 2 == 0)
		num /= 2;

	for (i = 3; i < num / 2; i += 2)
	{
		if (num % i == 0)
		{
			num /= i;
			primeNum = i;
		}
	}

	printf("%ld\n", primeNum);
	return (0);
}
