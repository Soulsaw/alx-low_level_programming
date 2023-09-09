#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_print - This function print the all key value in the hashtable
 * @ht: Is the pointer to the hashtable
 * Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, b = 0;
	hash_node_t *item;

	if (!ht)
		return;
	i = 0;
	printf("{");
	while (i < ht->size && ht)
	{
		item = ht->array[i];
		while (item)
		{
			if (b == 1)
				printf(", ");
			b = 1;
			printf("'%s': '%s'", item->key, item->value);
			item = item->next;
		}
		i++;
	}
	printf("}\n");
}
