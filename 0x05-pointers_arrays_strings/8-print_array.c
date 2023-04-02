#include "main.h"

/**
 * print_array - this function print the n elements of the int pointer
 * @a: ths first parameter of function
 * @n: the last parameter of function
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
