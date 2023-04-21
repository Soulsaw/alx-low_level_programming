#include "function_pointers.h"

/**
 * int_index - This function searches for an integer
 * @array: The array of integer
 * @size: The size of the array
 * @cmp: The function that compare
 * Return: index of the search number
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return 0;
	if (size <= 0)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);

	}
	return (-1);
}
