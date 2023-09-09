#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_get - This function retrieve the value assiciate with key
 * @ht: Is the pointer to hashtable
 * @key: The key of the value that we want to retrieve
 * Return: The value or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (!key || !ht)
		return (NULL);
	index = key_index((unsigned const char*)key, ht->size);

	if (ht->array[index])
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
	return (NULL);
}
