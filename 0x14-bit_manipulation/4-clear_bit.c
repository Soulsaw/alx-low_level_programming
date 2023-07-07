#include "main.h"
/**
 * clear_bit - this function sets the value of a bit to 0 at the given index
 * @n: The value
 * @index: The value of the index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	if (index >= sizeof(unsigned long int) * 4)
		return (-1);
	return (1);
}
