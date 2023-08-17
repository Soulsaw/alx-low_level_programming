#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - This fonction free all memory allocation
 * @head: Is a pointer to the head of the structures
 * Return: Nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
