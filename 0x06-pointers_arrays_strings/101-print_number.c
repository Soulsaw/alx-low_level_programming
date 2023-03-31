#include "main.h"

/**
 * print_number - print the entry number
 * @n: the we want to print
 */
void print_number(int n)
{
	unsigned int abs = n;

	if (n < 0)
	{
		_putchar('-');
		abs = -abs;
	}

	if ((abs / 10) > 0)
		print_number(abs / 10);

	_putchar('0' + (abs % 10));

}
