#include "main.h"

/**
 * swap_int - swaps the value of two integer
 *
 * @a: the first integer
 * @b: the last integer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
