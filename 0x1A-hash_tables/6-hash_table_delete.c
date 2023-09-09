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
	hash_table_t *head = ht;

	i = 0;
	while (i < ht->size && ht)
	{
		free_item(ht->array[i]);
		i++;
	}
	free(head->array);
	free(head);
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
	free(head);
}
