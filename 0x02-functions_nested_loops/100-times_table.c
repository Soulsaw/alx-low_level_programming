#include "main.h"

/**
 * print_times_table - This function that prints the 9 times table,
 * starting with 0
 *@n: the number to print
 * Return: Nothing
 *
 */
void print_times_table(int n)
{
	int i, j, r;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			r = i * j;
			if (r < 10)
			{
				if (j > 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + r);
			}
			else if (r >= 10 && r < 100)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + r / 10);
				_putchar('0' + r % 10);
			}
			else if (r >= 100)
			{
				_putchar(' ');
				_putchar('0' + r / 100);
				_putchar('0' + r % 100 / 10);
				_putchar('0' + r  % 100 % 10);
			}
			if (j < n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
