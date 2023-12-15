#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_list - This function search a value in an array of list
 * using the lineary search algorithms
 * @list: An pointer to the first node of the list
 * @size: The size of the list
 * @value: The value to search
 *
 * Return: a pointer to the node or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size), prev = 0, i;
	listint_t *lprev = list;
hjklkjh
	if (!list || size == 0)
		return (NULL);
	for (i = prev; i < step; i++)
		list = list->next;
	printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
	while (list->n  < value)
	{
		prev = step;
		step += sqrt(size);
		lprev = list;
		for (i = prev; i < step; i++)
		{
			if (!list->next)
				break;
			list = list->next;
		}
		printf("Value checked at index [%ld] = [%d]\n",
				list->index, list->n);
		if (!list->next)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);
	while (lprev->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				lprev->index, lprev->n);
		lprev = lprev->next;
		if (lprev == NULL)
			return (NULL);
	}
	printf("Value checked array[%ld] = [%d]\n", lprev->index, lprev->n);
	if (lprev->n == value)
		return (lprev);
	return (NULL);
}
