#include "lists.h"

/**
 * add_nodeint_end - This functions add a
 * new node at the end of a listint_t list
 * @head: The head of the list
 * @n: The element that we want to add
 *
 * Return: The address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *element, *temp;

	element = (listint_t *)malloc(sizeof(listint_t));

	if (element == NULL)
		return (NULL);

	element->n = n;
	element->next = NULL;

	if (*head == NULL)
	{
		*head = element;
		return (element);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = element;

	return (temp);
}
