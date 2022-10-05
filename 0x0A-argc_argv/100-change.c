#include <stdio.h>
#include <stdlib.h>

/**
 * main - finds minimum number of coins to make change
 *
 * @argc: argument count;
 * @argv: argument vector
 *
 * Return: 0 on Success and 1 on Error
 */

int main(int argc, char **argv)
{
	int i, num, change;
	int coins[5] = {25, 10, 5, 2, 1};

	num = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);
	i = 0;
	while (i < 5)
	{
		if (change == 0)
			break;
		num += change / coins[i];
		change = change % coins[i];
		i++;
	}

	printf("%d\n", num);

	return (0);
}
