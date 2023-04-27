#include "lists.h"

/**
 * add_node - Tis function adds a new node at the beginning
 * @head: The head of the struct
 * @str: Is the string to add
 * Return: The new lists
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *element;
	int len;

	element = (list_t *)malloc(sizeof(list_t));
	if (element == NULL)
	{
		return (NULL);
	}
	len = strlen(str);

	element->str = strdup(str);
	element->len = len;
	element->next = *head;
	*head = element;

	return (element);
}
