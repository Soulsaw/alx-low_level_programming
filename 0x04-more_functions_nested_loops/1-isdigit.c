#include "main.h"
/**
 * _isdigit - test if the caracter isdigit
 *
 * @c: The character to test
 *
 * Return: On success 1.
 * On not success 0
 */
int _isdigit(int c)
{
	if (!(c >= 48 && c <= 58))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
