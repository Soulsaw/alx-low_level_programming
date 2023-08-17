#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - This function add a nodes at the beginning
 * @head: Is a pointer to the head of list
 * @n: Is the data that we want to add
 * Return: The insert node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
	element->next = current;
	current->prev = element;

	*head = element;
	return (element);
}
