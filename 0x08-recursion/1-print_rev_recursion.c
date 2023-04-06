#include "main.h"
/**
 * _print_rev_recursion - This function print a string using the recursion
 * @s: The string that to prints
 * Return: The arret point of My function
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
