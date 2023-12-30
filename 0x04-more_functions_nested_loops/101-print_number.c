#include "main.h"
/**
 * print_number - print the entry number
 * @n: the we want to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	if (n / 10 == 0)
		_putchar('0' + n);
	else
	{
		print_number(n / 10);
		_putchar('0' + n % 10);
	}
}
