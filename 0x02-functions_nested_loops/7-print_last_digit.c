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

	value = n % 10;
	print(value);
	return (value);

}
