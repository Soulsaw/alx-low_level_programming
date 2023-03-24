#include "main.h"
/**
 * _isupper - test if the caracter is upper
 *
 * @c: The character to test
 *
 * Return: On success 1.
 * On not success 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
