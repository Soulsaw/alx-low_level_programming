#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - This function that returns the sum
 * of all the data (n) of a dlistint_t linked list.
 * @head: Is a pointer to the first element of list
 * Return: The sum of all data in the node
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int result = 0;

	while (current != NULL)
	{
		result += current->n;
		current = current->next;
	}
	return (result);
}
