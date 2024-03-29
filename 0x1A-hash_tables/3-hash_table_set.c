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

	if (!ht)
		return (0);

	if (key == NULL)
		return (0);
	index = key_index((unsigned const char*)key, ht->size);

	if (!ht->array[index])
	{
		item = create_item(key, value);
		if (!item)
			return (0);
		ht->array[index] = item;
	}
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
		}
		else
		{
			item = create_item(key, value);
			if (!item)
				return (0);
			insert_at_begin(&(ht->array[index]), item);
		}
	}
	return (1);
}
/**
 * create_item - This function permit to create an item of key: value
 * @key: Is the key string
 * @value: Is the value string
 * Return: A pointer to the item
*/
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item;

	item = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!item)
		return (NULL);
	item->key = (char *)malloc(sizeof(key) * sizeof(char));
	if (!item->key)
	{
		free(item);
		return (NULL);
	}
	item->value = (char *)malloc(sizeof(value) * sizeof(char));
	if (!item->value)
	{
		free(item->key);
		free(item);
		return (NULL);
	}
	strcpy(item->key, key);
	strcpy(item->value, value);
	item->next = NULL;

	return (item);
}
/**
 * insert_at_begin - This function insert the collision element to the begin
 * @item: Is the Pointer to the pointer of item
 * @new_item: Is the new item
 * Return: Nothing
*/
void insert_at_begin(hash_node_t **item, hash_node_t *new_item)
{
	hash_node_t *head = *item;

	new_item->next = head;
	*item = new_item;
}
