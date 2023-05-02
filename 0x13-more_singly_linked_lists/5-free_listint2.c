#include "lists.h"

/**
 * free_listint2 - This function free the listint_t
 * @head: Is the pointer to the listint_t
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	free(*head);
}
