#include "main.h"

/**
 * puts2 - thid function prints
 * @str: the pointer of the string
 *
 */
void puts2(char *str)
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

	for (i = 0; i <= cpt; i = i + 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
