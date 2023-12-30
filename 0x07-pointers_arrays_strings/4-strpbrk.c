#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes..
 * @s: The string to search.
 * @accept: The characters to match.
 *
 * Return: A a pointer to the byte in s that matches one of
 * the bytes which consist only of bytes from accept.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
