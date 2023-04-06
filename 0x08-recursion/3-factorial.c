#include "main.h"
/**
 * factorial - This function return the factorial of integer
 * @n: The number that we wnt to calcul the factorial
 * Return: The factorial of number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0)
		{
			return (1);
		}
		else
		{
			return (n * factorial(n - 1));
		}
	}
}
