#include <stdio.h>
#include "main.h"

/**
 * main - prints prime factors of numbers
 * Return: 0 always
 */

int main(void)
{
	int i = 1;
	unsigned long int num = 612852475143;

	while (i++)
	{
		if (i != 2 && i % 2 == 0)
			continue;

		else if (i != 3 && i % 3 == 0)
			continue;

		else if (i != 5 && i % 5 == 0)
			continue;

		else if (i != 7 && i % 7 == 0)
			continue;

		if (num % i == 0)
		{
			printf("%d", i);
			num /= i;

			if (num == 1)
			{
				printf("\n");
				break;
			}

			printf(", ");
			i = 1;
		}
	}

	return (0);
}
