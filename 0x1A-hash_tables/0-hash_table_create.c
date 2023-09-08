#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - This function create an array of hastable
 *
 * @size: Is the size of the array
 * Return: The new array hastable
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;

	hash = (hash_table_t *)malloc(size * sizeof(hash_table_t));

	if (!hash)
		return (NULL);
	return (hash);
}
