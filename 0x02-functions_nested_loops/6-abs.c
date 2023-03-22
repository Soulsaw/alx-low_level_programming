#include "main.h"
/**
 * _abs - the absolute value of integer
 *
 * @n: The character to test
 *
 * Return: On success n.
 * On not success -n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
