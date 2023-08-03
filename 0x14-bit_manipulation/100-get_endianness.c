#include "main.h"
/**
 * get_endianness - this function return
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int n = 1;
	unsigned char *byte = (unsigned char *) &n;

	return ((int) *byte);
}
