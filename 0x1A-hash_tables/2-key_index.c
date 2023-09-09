#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * key_index - Write a function that gives you the index of a key.
 * @key: Is the key string
 * @size: Is the limited size of the array
 * Return: This index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}
