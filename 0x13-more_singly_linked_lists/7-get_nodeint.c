#include "lists.h"

/**
 * pop_listint - This function delete the head of the node
 * @head: The head of the node
 * Return: O or the head node's data
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	i = 0;
	temp = head;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		if (i == index)
		{
			return (temp);
		}
		i++;
	}

	return (NULL);
}
