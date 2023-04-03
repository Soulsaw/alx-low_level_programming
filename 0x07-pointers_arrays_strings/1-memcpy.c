#include "main.h"

/**
 * _memcpy - this fun bytes of the memory area src to the memory area dest
 * @dest: The destination of pointer
 * @src: The source of pointer
 * @n: The maximal size of bytes to fills
 * Return: dest the memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
