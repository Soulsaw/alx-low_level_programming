#include "lists.h"

/**
 * free_listint_safe - This function prints all elements of a listint_t
 * @h: Is the head of the list
 *
 * Description: The good description for this function
 * Return: The number of node
 */
size_t free_listint_safe(const listint_t **h)
{
	const listint_t *temp, *nexti, *prev;
	size_t count = 0;

	if (h == NULL)
		return (98);
	temp = h;
	while (temp != NULL)
	{
		prev = temp;
		next = temp->next;
		count++;
		free(prev);
		if (next >= temp)
		{
			free(next);
			break;
		}
		temp = next;
	}

	return (count);
}
