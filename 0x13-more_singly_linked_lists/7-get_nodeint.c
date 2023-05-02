#include "lists.h"

/**
 * get_nodeint_at_index - This function return the given index node
 * @head: The head of the node
 * @index: The index of the node that we want to return
 * Return: NULL or The node
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
