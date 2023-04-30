#include "lists.h"

/**
 * listint_len - This function return the number of elements of a listint_t
 * @h: Is the head of the list
 *
 * Description: The good description for this function
 * Return: The number of node
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
