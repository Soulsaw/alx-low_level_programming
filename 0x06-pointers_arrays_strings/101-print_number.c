#include "main.h"

/**
 * print_number - print the entry number
 * @n: the we want to print
 */
void print_number(int n)
{
	int abs;

	abs = n;
	if (n < 0)
	{
		putchar('-');
		abs = -1 * n;
	}
	if (n / 10 > 0)
	{
		print_number(n / 10);
	}
	putchar('0' + (n % 10));

}
