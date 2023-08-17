#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - This function add a nodes at the end
 * @head: Is a pointer to the head of list
 * @n: Is the data that we want to add
 * Return: The insert node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *element, *current = *head;

	element = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (element == NULL)
		return (NULL);
	element->n = n;
	element->next = NULL;
	element->prev = NULL;

	if (current == NULL)
	{
		*head = element;
		return (element);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = element;
	element->prev = current;
	return (element);
}
