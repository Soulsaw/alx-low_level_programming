#include "main.h"
/**
 * _islower - test if the caracter is lower
 *
 * @c: The character to test
 *
 * Return: On success 1.
 * On not success 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
