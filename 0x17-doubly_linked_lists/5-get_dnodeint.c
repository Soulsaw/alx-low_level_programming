#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - This function that returns
 * the nth node of a dlistint_t linked list.
 * @head: Is a pointer to the first element of list
 * @index: Is the index that we want to check
 * Return: The pointer to the search node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	size_t i = 0;

	while (current != NULL)
	{
		if (index == i)
			return (current);
		i++;
		current = current->next;
	}
	return (NULL);
}
