#include "main.h"

/**
 * _strcmp - this function permit to compare 
 * @s1: The first string
 * @s2: The second string
 * Return: The difference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int nb1;
	int nb2;
	int i;

	i = 0;
	nb1 = 0;
	nb2 = 0;
	while (s1[i] != '\0')
	{
		nb1 += s1[i];
		i++;
	}

	
	i = 0;
	while (s2[i] != '\0')
	{
		nb2 += s2[i];
		i++;
	}

	return (nb1 - nb2);
}
