#include "main.h"

/**
 * rev_string - this function permit to print a string as reverse
 *
 * @s: the point that to print
 */

void rev_string(char *s)
{
	int i;
	int temp;
	int cpt;

	i = 0;
	cpt = 0;
	while (s[i] != '\0')
	{
		cpt++;
		i++;
	}

	for (i = 0; i < cpt / 2; i++)
	{
		temp = s[i];
		s[i] = s[cpt - (i + 1)];
		s[cpt - (i + 1)] = temp;
	}
}
