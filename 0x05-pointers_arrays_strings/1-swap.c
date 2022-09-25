#include "main.h"

/**
 * swap_int - swap the values of two integers
 *
 * @a: integer input addresses to be swapped
 * @b: integer input addresses to be swapped
 */

void swap_int(int *a, int *b)
{
	int c, d;

	/* create placeholders for *a and *b */
	c = *a;
	d = *b;
	/* switch a and b with d and c respectively */
	*a = d;
	*b = c;
}
