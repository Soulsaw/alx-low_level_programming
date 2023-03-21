#include "main.h"
/**
 * print_to_98 - print the numbers between n and 98
 * @n: The number to compare which 98
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			putchar('0' + n);
			if (n < 98)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		putchar('\n');
	}
	else
	{
		while (n >= 98)
		{
			putchar('0' + n);
			if (n > 98)
			{
				putchar(',');
				putchar(' ');
			}
			n--;
		}
		putchar('\n');
	}

}
