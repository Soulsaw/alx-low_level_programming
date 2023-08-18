#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - This function deletes the node
 * at index index of a dlistint_t linked listfunction
 * that inserts a new node at a given position.
 * @head: Is a pointer to the first element of list
 * @index: Is the index that we want to check
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *tmp, *previous;
	size_t i = 1;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		if (index == i)
		{
			if (current == NULL)
				return (-1);
			if (current->next == NULL)
			{
				tmp->next = NULL;
				free(current);
				return (1);
			}
			previous = current;
			current = current->next;
			tmp->next = current;
			current->prev = tmp;
			free(previous);
			return (1);
		}
		i++;
	}
	return (-1);
}
