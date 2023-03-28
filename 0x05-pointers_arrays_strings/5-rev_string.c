#include "main.h"

/**
 * rev_string - this function permit to print a string as reverse
 *
 * @s: the point that to print
 */

void rev_string(char *s)
{
	int i;
	int j;
	int cpt;
	char *rev;

	i = 0;
	cpt = 0;
	while (s[i] != '\0')
	{
		cpt++;
		i++;
	}

	j = 0;
	for (i = cpt - 1; i >= 0; i--)
	{
		rev[j] = s[i];
		j++;	
	}
	s = rev;
}
