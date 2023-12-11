#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - This function search a value in an array of integer
 * using the lineary search algorithms
 * @array: An pointer to the first element of the array
 * @size: The size of the integer
 * @value: The value to search
 *
 * Return: -1 or 0
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
