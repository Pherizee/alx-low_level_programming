#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 *
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 always Success
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
