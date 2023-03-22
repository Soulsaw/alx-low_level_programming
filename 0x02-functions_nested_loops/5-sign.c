#include "main.h"
/**
 * print_sign - test if the caracter is lower
 *
 * @n: The character to test
 *
 * Return: On success 1.
 * On not success 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if(n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
