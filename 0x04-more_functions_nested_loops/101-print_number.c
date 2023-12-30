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
		_putchar('-');
		abs = -1 * n;
	}
	if ((abs / 1000) != 0)
	{
		_putchar('0' + (abs / 1000));
		_putchar('0' + (abs % 1000) / 100);
		_putchar('0' + ((abs % 1000) % 100) / 10);
		_putchar('0' + ((abs % 1000) % 100) % 10);
	}
	else if (abs / 100 != 0)
	{
		_putchar('0' + abs / 100);
		_putchar('0' + (abs % 100) / 10);
		_putchar('0' + (abs % 100) % 10);
	}
	else if (abs / 10 != 0)
	{
		_putchar('0' + abs / 10);
		_putchar('0' + abs % 10);
	}
	else
	{
		_putchar('0' + abs);
	}
}
