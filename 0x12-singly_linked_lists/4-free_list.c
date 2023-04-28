#include "lists.h"

/**
 * free_list - This function frees lists
 * @head: The list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		free(temp->str);
		temp = temp->next;
	}
	free(temp);
	free(head);
}
