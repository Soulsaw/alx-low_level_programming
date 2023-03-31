#include "main.h"

/**
 * reverse_array - this function permit to reverse a integer
 * @a: The first parameter
 * @n: The second parameter
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i <= (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - (i + 1)];
		a[n - (i + 1)] = temp;
	}
	putchar('\n');
}
