#include "main.h"
/**
 * print_binary - This function print the binary digit of a number
 * @n: The number thar we want to convert at binary
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int setValue = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
			setValue = 0;
		}
		else if (!setValue)
		{
			_putchar('0');
		}

		mask >>= 1;
	}

}
