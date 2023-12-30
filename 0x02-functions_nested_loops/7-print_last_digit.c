#include "main.h"

/**
 * print_last_digit - Print the last digit of the number
 *
 * @n: The number want to print the last digit
 *
 * Return: return a value of the last digit
 *
 */

int print_last_digit(int n)
{
	int value;

	if (n < 0)
	{
		n = n * (-1);
	}
	value = n % 10;
	_putchar('0' + value);
	return (value);

}
