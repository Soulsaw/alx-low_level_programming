#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 9 do not print 2 and 4
 *
 */
void more_numbers(void)
{
	int j;
	int i;
	int n;

	for (j = 1; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			n = i % 10;
			if (i / 10 != 0)
			{
				putchar('0' + i / 10);
			}
			putchar('0' + n);
		}
			putchar('\n');
	}
}
