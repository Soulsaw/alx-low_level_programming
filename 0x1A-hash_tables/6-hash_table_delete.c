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
	hash_node_t *head;

	i = 0;

	if (ht)
	{
		while (i < ht->size)
		{
			while (ht->array[i])
			{
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				head = ht->array[i];
				ht->array[i] = ht->array[i]->next;
				free(head);
			}
			i++;
		}
		free(ht);
	}
}
