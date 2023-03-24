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
	
	for (j = 0;j < n;j++)
	{
		for (i = 0;i < n;i++)
		{
			if (j == i)
			{
				putchar('\');
			}
		}
		putchar('\n');
	}
}
