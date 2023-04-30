#include "lists.h"

/**
 * add_nodeint - This functions add a
 * new node at the begining of a listint_t list
 * @head: The head of the list
 * @n: The element that we want to add
 *
 * Return: The address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *element;

	element = (listint_t *)malloc(sizeof(listint_t));

	if (element == NULL)
		return (NULL);

	element->n = n;

	if (head == NULL)
		return (element);

	element->next = *head;
	*head = element;
	return (element);
}
