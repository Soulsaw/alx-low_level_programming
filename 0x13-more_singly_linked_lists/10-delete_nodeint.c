#include "lists.h"

/**
 * delete_nodeint_at_index - This function delete the index data of the node
 * @head: The head of the node
 * @index: The index of the data
 * Return: 1 Success -1 Failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	temp = *head;
	while (temp != NULL && index > 0)
	{
		prev = temp;
		temp = temp->next;
		index--;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);
	return (1);

}
