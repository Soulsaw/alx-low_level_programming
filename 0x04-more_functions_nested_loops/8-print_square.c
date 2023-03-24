#include "main.h"

/**
 * print_square - prints the line of n numbers
 *
 * @size: The size of the square
 *
 */
void print_square(int size)
{
	int i;
	int j;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
