#include "main.h"
/**
 * _puts_recursion - This function print a string using the recursion
 * @s: The string that to prints
 * Return: The arret point of My function
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		return;
	}
}
