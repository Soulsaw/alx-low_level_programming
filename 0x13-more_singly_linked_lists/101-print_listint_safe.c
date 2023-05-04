#include "lists.h"

/**
 * print_listint_safe - This function prints all elements of a listint_t
 * @head: Is the head of the list
 *
 * Description: The good description for this function
 * Return: The number of node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp, *next;
	size_t count = 0;

	if (head == NULL)
		return (98);
	temp = head;
	while (temp != NULL)
	{
		next = temp->next;
		count++;
		printf("[%p] %d\n", (void *)temp, temp->n);
		if (next >= temp)
		{
			printf("-> [%p] %d\n", (void *)next, next->n);
			break;
		}
		temp = next;
	}

	return (count);
}
