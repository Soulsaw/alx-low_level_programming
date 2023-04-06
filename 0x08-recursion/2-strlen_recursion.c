#include "main.h"
/**
 * _strlen_recursion - This function return a string using the recursion
 * @s: The string that to calcul the strlen
 * Return: The lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
