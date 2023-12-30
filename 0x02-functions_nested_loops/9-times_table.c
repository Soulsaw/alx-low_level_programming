#include "main.h"

/**
 * times_table - This function that prints the 9 times table,
 * starting with 0
 *
 * Return: Nothing
 *
 */
void times_table(void)
{
	int i, j, r;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			r = i * j;
			if (r < 10)
			{
				if (j > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + r);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + r / 10);
				_putchar('0' + r % 10);
			}
			if (j < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
