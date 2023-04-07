#include "main.h"
int check_sqrt_recursion(int n, int b);
/**
 * check_sqrt_recursion - Calcul the naturel square root of a number
 * @n: The number
 * @b: The square
 * Return: -1 or the square root of number
 */
int check_sqrt_recursion(int n, int b)
{

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n != 0)
		{
			if (n < 0)
				return (-1);
			n = n - (2 * b + 1);
			b++;
			return (check_sqrt_recursion(n, b));
		}
		return (b);
	}
}

/**
 * _sqrt_recursion - Calcul the naturel square root of a number
 * @n: The number
 * Return: -1 or the square root of number
 */
int _sqrt_recursion(int n)
{
	return (check_sqrt_recursion(n, 0));
}
