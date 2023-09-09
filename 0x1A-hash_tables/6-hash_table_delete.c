#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_delete - This function free all alloc of the hashtable
 * @ht: Is the pointer to the hashtable
 * Return: Noting
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;

	if (ht != NULL)
	{
		i = 0;
		current = ht->array[i];
		while (i < ht->size)
		{
			current = ht->array[i];
			free_item(current);
			i++;
		}
	}
}
/**
 * free_item - This function free all allocation
 *
 * @item: This is the pointer to the hash_node_t
 * Return: Nothing
*/
void free_item(hash_node_t *item)
{
	hash_node_t *head = item, *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current->key);
		free(current->value);
		free(current);
	} 
}
