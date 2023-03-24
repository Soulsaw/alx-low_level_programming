#include "main.h"

/**
 * print_line - prints the line of n numbers
 *
 * @n: The numbers that prints n
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0;i < n;i++)
	{
		putchar('_');
	}
	putchar('\n');
}
