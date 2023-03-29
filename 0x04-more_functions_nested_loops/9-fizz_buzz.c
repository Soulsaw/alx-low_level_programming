#include "main.h"

/**
 * main - prints the numbers, from 0 to 9 do not print 2 and 4
 *
 * Return: 0 success
 */
int main(void)
{
	int i;

		for (i = 1; i <= 100; i++)
		{
			if (i % 3 == 0)
			{
				putchar('F');
				putchar('i');
				putchar('z');
				putchar('z');
			}
			if (i % 5 == 0)
			{
				putchar('B');
				putchar('u');
				putchar('z');
				putchar('z');
			}
			else
			{
				if (i >= 10)
				{
					putchar('0' + (i / 10));
					putchar('0' + (i % 10));
				}
				else
				{
					putchar('0' + i);
				}
			}

			if (i < 101)
			{
				putchar(' ');
			}
		}

		return (0);
}
