#include "main.h"

/**
 * _strlen - this function return the length of a string
 *
 * @s: Is the string value
 *
 * Return: The length
 */
int _strlen(char *s)
{
	int cpt;
	int i;

	cpt = 0;
	i = 0;

	while (s[cpt] != '\0')
	{
		cpt++;
		i++;
	}

	return (cpt);

}
