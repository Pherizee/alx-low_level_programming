#include "main.h"

/**
 * reverse_array - reverse the contents of an array
 * @a: the array to reverse
 * @n: the number of elements to reverse
*/

void reverse_array(int *a, int n)
{
	int start, end, i = 0;

	for (; i < n / 2; i++)
	{
		start = a[i];
		end = a[n - i - 1];
		a[i] = end;
		a[n - i - 1] = start;
	}
}
