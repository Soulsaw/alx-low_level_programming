#include "lists.h"

/**
 * pop_listint - This function delete the head of the node
 * @head: The head of the node
 * Return: O or the head node's data
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	value = (*head)->n;

	*head = (*head)->next;
	free(temp);
	return (value);
}
