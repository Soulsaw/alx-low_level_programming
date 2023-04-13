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
	char *copy = s, value = b;

	for (i = 0; i < n; i++)
		copy[i] = value;

	return (copy);
}

/**
 * _calloc - This function allocates memory for an array
 * @nmemb: The elements
 * @size: The size of array
 * Return: allocates memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
