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
	if ((abs / 1000) != 0)
	{
		putchar('0' + (abs / 1000));
		putchar('0' + (abs % 1000) / 100);
		putchar('0' + ((abs % 1000) % 100) / 10);
		putchar('0' + ((abs % 1000) % 100) % 10);
	}
	else if (abs / 100 != 0)
	{
		putchar('0' + abs / 100);
		putchar('0' + (abs % 100) / 10);
		putchar('0' + (abs % 100) % 10);
	}
	else if (abs / 10 != 0)
	{
		putchar('0' + abs / 10);
		putchar('0' + abs % 10);
	}
	else
	{
		putchar('0' + abs);
	}
}
