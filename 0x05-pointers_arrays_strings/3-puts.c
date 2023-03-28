#include "main.h"

/**
 * _puts - This function print a string
 *
 * @str: the pointer that to print
 *
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
