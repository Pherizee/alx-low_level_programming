#include <stdio.h>

void print_num(int n);

/**
 * main - entry point of program
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 99; i++)
	{
		j = i + 1;
		for (; j <= 99; j++)
		{
			print_num(i);
			putchar(' ');
			print_num(j);

			if (i == 98 && j == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

/**
 * print_num - function that prints all 2 digit numbers
 * @n: int number to be printed
 * Return: void
 */

void print_num(int n)
{
	putchar((n / 10) + '0');
	putchar((n % 10) + '0');
}
