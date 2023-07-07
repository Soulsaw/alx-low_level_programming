#include "main.h"
/**
 * set_bit - this function sets the value of a bit to 1 at the given index
 * @n: The value
 * @index: The value of the index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | (1 << index);
	return (if (index >= sizeof(unsigned long int) * 8) ? -1 : 1);
}
