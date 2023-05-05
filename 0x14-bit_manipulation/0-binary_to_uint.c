#include "main.h"
int check(char bit);
int check_string(const char *str);
int bit_val(char c);

/**
 * bit_val - return the value of bit
 * @c: The bit value
 * Return: 0 or 1
 */
int bit_val(char c)
{
	if (c == '1')
		return (1);
	return (0);
}

/**
 * check_string - This function check if on the string
 * @str: The string
 * Return: 0 or 1
 */
int check_string(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (check(str[i]) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * check - This function check if char is 0 or 1
 * @bit: The char that we want to check
 * Return: 0 or 1
 */
int check(char bit)
{
	if (bit == '0' || bit == '1')
		return (1);
	return (0);
}

/**
 * _pow - This function return the pow of integer
 * @x: The value
 * @y: The power
 * Return: The pow of integer
 */
int _pow(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow(x, y - 1));
	}
}
/**
 * binary_to_uint - This function convert the char digit to integer
 * @b: The string of 0 or 1
 * Return: The integer or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i, len = 0;

	if (b == NULL || check_string(b) == 0)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		len++;
		i++;
	}
	for (i = 0; i < len; i++)
	{
		n += bit_val(b[i]) * _pow(2, len - (i + 1));
	}

	return (n);
}

