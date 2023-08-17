#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - This  function
 * that inserts a new node at a given position.
 * @h: Is a pointer to the first element of list
 * @idx: Is the index that we want to check
 * @n: The data to insert
 * Return: The pointer to the search node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *tmp, *element = NULL;
	size_t i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		if (idx == i + 1)
		{
			add_dnodeint_end(&element, n);
			tmp->next = element;
			element->prev = tmp;
			element->next = current;
			current->prev = element;
		}
		i++;
	}
	return (element);
}
