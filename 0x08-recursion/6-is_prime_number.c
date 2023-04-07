#include "main.h"

/**
 * _lastdigit - This function return the last digit
 * @n: The number that we want to return the last digit
 * Return: The last digit of the number
 */
int _lastdigit(int n)
{
	if ((n / 10) != 0)
	{
		return (_lastdigit(n % 10));
	}
	else
	{
		return (n % 10);
	}
}

/**
 * _sumdigit - This function sum the digit of the number
 * @n: The number
 * Return: The sum of digit of number
 */
int _sumdigit(int n)
{
	if ((n / 10) != 0)
	{
		return ((n % 10) + _sumdigit(n / 10));
	}
	else
	{
		return (n % 10);
	}
}
/**
 * prime_number - Test the prime number less than 10
 * @n: The number
 * Return: 1 if number is prime or 0 owerthise
 */
int prime_number(int n)
{
	if (n == 2 || n == 3 || n == 5 || n == 7)
		return (1);
	return (0);
}
/**
 * is_prime_number - Check if the number is prime number
 * @n: The number that we want to check
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n < 10)
		return (prime_number(n));
	if (_lastdigit(n) % 2 == 0 || _sumdigit(n) % 3 == 0
			|| (_lastdigit(n) == 5 && n % 5 == 0))
		return (0);
	return (1);
}
