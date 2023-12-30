#include "main.h"
/**
 * print_number - print the number less than 98
 * @n: The number to print
 * Return: nothing
 */
void print_number(int n)
{
	if (n >= 100)
	{
		_putchar('0' + n / 100);
		_putchar('0' + n % 100 / 10);
		_putchar('0' + n  % 100 % 10);
	}
	else if (n >= 10)
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
	else
	{
		_putchar('0' + n);
	}
}
/**
 * comma - print the number less than 98
 * @n: The number to print
 * Return: nothing
 */
void comma(int n)
{
	if (n < 98 || n > 98)
	{
		_putchar(',');
		_putchar(' ');
	}
}
/**
 * print_to_98 - print the numbers between n and 98
 * @n: The number to compare which 98
 */
void print_to_98(int n)
{
	int val;

	if (n <= 98)
	{
		while (n <= 98)
		{
			val = n;
			if (n < 0)
			{
				_putchar('-');
				val = val * (-1);

			}
			print_number(val);
			comma(n);
			n++;
		}
		_putchar('\n');
	}
	else
	{
		while (n >= 98)
		{
			print_number(n);
			comma(n);
			n--;
		}
		_putchar('\n');
	}

}
