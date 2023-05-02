#include "lists.h"

/**
 * sum_listint - This function calcul the sum of the node data
 * @head: The head of the node
 * Return: O or the sum of the node data
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
