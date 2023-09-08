#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_djb2 - This is a hash function implementing the djb2 algorithm.
 * @str: The key to use hash function
 * Return: The corresponding index to strore (key:value)
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}
