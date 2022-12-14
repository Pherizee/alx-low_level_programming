#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry into the program
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (SUCCESS) or non-zero (FAILURE)
 */

int main(int argc, char *argv[])
{
	int (*op_func)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_func(a, b));
	return (0);
}
