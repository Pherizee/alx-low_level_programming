#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: nothing
 */

int main(int argc, char **argv)
{
	int a, b;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (0);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);

	return (0);
}
