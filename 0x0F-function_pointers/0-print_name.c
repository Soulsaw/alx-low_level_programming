#include "function_pointers.h"

/**
 * print_name - This function print name
 * @name: The string that we want to print
 * @f: The argument
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	void (*print)(char *) = f;

	if (name == NULL)
		return;

	(*print)(name);
}
