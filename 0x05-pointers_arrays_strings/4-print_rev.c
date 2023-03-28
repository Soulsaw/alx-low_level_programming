#include "main.h"

/**
 * print_rev - this function permit to print a string as reverse
 *
 * @s: the point that to print
 */

void print_rev(char *s)
{
	int i;
	int cpt;

	i = 0;
	cpt = 0;
	while (s[i] != '\0')
	{
		cpt++;
		i++;
	}

	for (i = cpt - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
