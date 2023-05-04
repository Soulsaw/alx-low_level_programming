#include "lists.h"

/**
 * reverse_listint - This function reverse the list of the node
 * @head: The head of the node
 * Return: The address of the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *temp;

	while (current != NULL)
	{
		temp = current->next;
		current->next = prev;
		prev = current;
		current = temp;
	}
	*head = prev;

	return (prev);
}
