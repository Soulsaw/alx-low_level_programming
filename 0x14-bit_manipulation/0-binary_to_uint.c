#include "main.h"
/**
 * bit_value - Return the value of binary digit
 * @val: is the character to 0 or 1
 * Return: The value of the binary digit
 */
int bit_value(char val)
{
	if (val == '0')
		return (0);
	if (val == '1')
		return (1);
	return (-1);
}
/**
 * lenght_fun - This function return the len=ght of a string
 * @str: Is the string
 * Return: The lenght of the string
 */
int lenght_fun(const char *str)
{
	int cpt = 0, i = 0;

	while (str[i] != '\0')
	{
		cpt++;
		i++;
	}
	return (cpt);
}
/**
 * power_value - this function return the pow value of integer
 * @a: This is the value
 * @n: The degre of the pow
 * Return: the pow value of integer
 */
int power_value(int a, int n)
{
	if (n == 0)
		return (1);
	else
		return (a * power_value(a, n - 1));
}
/**
 * binary_to_uint - this function return the decimal value of binary
 * @b: The caracter of 0 and 1
 * Return: The decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, i;
	unsigned int uint = 0;

	if (b == NULL)
		return (0);
	len = lenght_fun(b);
	for (i = 0; i < len; i++)
	{
		if (bit_value(b[i]) == -1)
			return (0);
		uint += bit_value(b[i]) * power_value(2, len - (i + 1));
	}

	return (uint);
}
