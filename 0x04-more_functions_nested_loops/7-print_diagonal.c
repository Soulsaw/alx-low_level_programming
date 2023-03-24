#include "main.h"

/**
 * print_diagonal - prints the line of n numbers
 *
 * @n: The numbers that prints n
 *
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < j; i++)
			{
				if (i == j)
				{
					putchar('\\');
				}
				else
				{
					putchar(' ');
				}
			}
			putchar('\n');
		}
	}
}
