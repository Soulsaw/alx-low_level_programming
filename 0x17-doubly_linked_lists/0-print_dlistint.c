#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - This function print all nodes
 * @h: Is the double structures list
 * Return: The numbers of node
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t n = 0;

	while (current != NULL)
	{
		n++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (n);
}
