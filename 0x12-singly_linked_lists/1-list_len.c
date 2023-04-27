#include "lists.h"

/**
 * list_len - This function return the number of the elements of a list_t list
 * @h: Pointer to the list_t
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		n++;

		h = h->next;
	}
	return (n);
}
