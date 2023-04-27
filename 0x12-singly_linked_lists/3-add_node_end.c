#include "lists.h"

/**
 * add_node_end - Tis function adds a new node at the end
 * @head: The head of the struct
 * @str: Is the string to add
 * Return: The new lists
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *element, *temp;
	int len = 0, i;

	element = (list_t *)malloc(sizeof(list_t));
	if (element == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	element->str = strdup(str);
	element->len = len;
	if (*head == NULL)
	{
		*head = element;
		return (element);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = element;

		return (temp);
	}
}
