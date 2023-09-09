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

	if (ht != NULL)
	{
		i = 0;
		while (i < ht->size)
		{
			if (ht->array[i] != NULL)
			{
				printf("Ok->");
			}
			i++;
		}
	}
}
