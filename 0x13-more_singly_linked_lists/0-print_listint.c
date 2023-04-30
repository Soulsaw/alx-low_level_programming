#include "lists.h"

/**
 * print_listint - This function prints all elements of a listint_t
 * @h: Is the head of the list
 *
 * Description: The good description for this function
 * Return: The number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
