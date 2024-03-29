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
	unsigned long int i;

	hash = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (!hash)
		return (NULL);
	hash->size = size;
	hash->array = (hash_node_t **)calloc(hash->size, sizeof(hash_node_t *));
	if (!hash->array)
	{
		free(hash);
		return (NULL);
	}

	for (i = 0; i < hash->size; i++)
		hash->array[i] = NULL;

	return (hash);
}
