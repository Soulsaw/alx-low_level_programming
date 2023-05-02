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
	listint_t *temp = *head, *element, *tmp;
	unsigned int i;

	element = (listint_t*)malloc(sizeof(listint_t));
	if (element == NULL)
		return (NULL);

	element->n = n;
	element->next = NULL;

	if (*head == NULL)
		return (NULL);

	i = 0;
	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			tmp = temp;
			temp = temp->next;
			tmp->next = element;
			element->next = temp;
			return (temp);
		}
		temp = temp->next;
		i++;
	}

	return (NULL);
}
