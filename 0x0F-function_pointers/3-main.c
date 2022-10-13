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

	char *op = (char *)argv[2];
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_func = get_op_func(op);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_func(a, b));
	return (0);
}
