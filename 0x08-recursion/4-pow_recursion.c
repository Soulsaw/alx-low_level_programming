#include "main.h"

/**
 * _pow_recursion - This function calcul the pow raised of the integer
 * @x: The number that we want to calcul the pow
 * @y: The power of the number
 * Return: The value of the x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
