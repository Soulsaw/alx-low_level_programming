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
		if (a[i] >= 1000)
		{
			putchar('0' + (a[i] / 1000));
			putchar('0' + ((a[i] % 1000) / 100));
			putchar('0' + (((a[i] % 1000) % 100) / 10);
