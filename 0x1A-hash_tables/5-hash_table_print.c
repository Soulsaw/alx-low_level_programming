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

	if (!ht)
		printf("{}\n");
	if (ht)
	{
		i = 0;
		printf("{");
		while (i < ht->size)
		{
			while (ht->array[i])
			{
				if (b == 1)
					printf(", ");
				b = 1;
				printf("'%s':'%s'", ht->array[i]->key, ht->array[i]->value);

				ht->array[i] = ht->array[i]->next;
			}

			i++;
		}
		printf("}\n");
	}
}
