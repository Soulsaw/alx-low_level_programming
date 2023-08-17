#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - This function return the lenght of structures list
 * @h: Is the pointer to the head of lists
 * Return: The numbers of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		n++;
		current = current->next;
	}
	return (n);
}
