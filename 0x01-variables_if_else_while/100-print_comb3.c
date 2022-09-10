#include <stdio.h>

/**
 * main - entry point of program
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '8'; i++)
	{
		j = i + 1;
		for (; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i < '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
