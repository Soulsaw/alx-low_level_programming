#include "lists.h"

/**
 * insert_nodeint_at_index - This function insert node at the given position
 * @head: The head of the node
 * @idx: The index of the new node
 * @n: The node data
 * Return: NULL or The new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *element, *temp;

	if (*head == NULL || idx == 0)
	{
		element = malloc(sizeof(listint_t));

		if (element == NULL)
			return (NULL);
		element->n = n;
		element->next = NULL;

		element->next = *head;
		*head = element;

		return (element);
	}

	temp = *head;

	while (temp != NULL && idx > 1)
	{
		temp = temp->next;
		idx--;
	}

	if (temp == NULL)
		return (NULL);

	element = malloc(sizeof(listint_t));

	if (element == NULL)
		return (NULL);

	element->n = n;
	element->next = NULL;
	element->next = temp->next;
	temp->next = element;

	return (element);
}
