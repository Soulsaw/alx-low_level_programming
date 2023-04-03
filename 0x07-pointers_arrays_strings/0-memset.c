#include "main.h"

/**
 * _memset - this funtion fills the first n bytes of the memory area to by s
 * @s: the first parameter
 * @b: an other parameter
 * @n: The maximal size of bytes to fills
 * Return: s the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
