#include "main.h"

/**
 * _strcmp - this function permit to compare
 * @s1: The first string
 * @s2: The second string
 * Return: The difference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
