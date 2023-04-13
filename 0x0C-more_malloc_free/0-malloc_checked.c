#include "main.h"

/**
 * malloc_checked - Function that allocates memory
 * @b: the size of pointer
 * Return: size or 98
 */
void *malloc_checked(unsigned int b)
{
	if (malloc(sizeof(b)) == NULL)
	{
		exit(98);
	}
	return ((void *)(malloc(sizeof(b))));
}
