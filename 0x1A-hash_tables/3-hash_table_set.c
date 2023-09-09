#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_set - This function adds an element to the hash table.
 * @ht: Is a pointer to the hastable
 * @key: Is the key
 * @value: Is the value
 * Return: 1 on (Success) or 0 (on error)
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	unsigned long int index;

	if (key == NULL)
		return (0);
	index = key_index((unsigned const char*)key, ht->size);
	item = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!item)
		return (0);
	item->key = (char *)malloc(sizeof(key) * sizeof(char));
	item->value = (char *)malloc(sizeof(value) * sizeof(char));
	strcpy(item->key, key);
	strcpy(item->value, value);
	item->next = NULL;

	if (!ht->array[index])
	{
		ht->array[index] = item;
	}
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
		}
	}
	return (1);
}
