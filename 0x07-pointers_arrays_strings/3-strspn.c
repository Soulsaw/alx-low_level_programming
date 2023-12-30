#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The characters to match.
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int boolean, i;

	while (*s)
	{
		boolean = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				boolean = 1;
				break;
			}
		}
		if (!boolean)
			break;
		s++;
	}
	return (count);
}
