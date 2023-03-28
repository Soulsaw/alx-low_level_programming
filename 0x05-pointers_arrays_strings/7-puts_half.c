#include "main.h"

/**
 * puts_half - this function permit to print the second half of string
 *
 * @str: the point that to print
 */

void puts_half(char *str)
{
	int i;
	int cpt;

	i = 0;
	cpt = 0;
	while (str[i] != '\0')
	{
		cpt++;
		i++;
	}

	for (i = ((cpt - 1) / 2) + 1; i < cpt; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
