#include "main.h"
/**
 * _isalpha - test if the caracter is alphabet
 *
 * @c: The character to test
 *
 * Return: On success 1.
 * On not success 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
