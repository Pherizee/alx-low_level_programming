#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Success 0 always
 */

int main(int argc, char **argv)
{
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (isalpha(*argv[i]) > 0)
		{
			printf("Error\n");
			return (0);
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
