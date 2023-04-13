#include "main.h"

/**
 * malloc_checked - Function that allocates memory
 * @b: the size of pointer
 * Return: size or 98
 */
void *malloc_checked(unsigned int b)
{
	void *var =malloc(b);

	if (var == NULL)
	{
		exit(98);
	}
	return (var);
}
