#include "lists.h"

/**
 * free_list - This function frees lists
 * @head: The list
 * Return: nothing
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		head = head->next;
	}
	free(head);
}
