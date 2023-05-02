#include "lists.h"

/**
 * pop_listint - This function delete the head of the node
 * @head: The head of the node
 * Return: O or the head node's data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
