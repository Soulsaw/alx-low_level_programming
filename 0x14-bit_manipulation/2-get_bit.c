#include "main.h"
/**
 * get_bit - this function return the bit at the given index
 * @n: The number
 * @index: The index of the bit value that we want to get
 * Return: The value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n & (1 << index)) != 0);
}
