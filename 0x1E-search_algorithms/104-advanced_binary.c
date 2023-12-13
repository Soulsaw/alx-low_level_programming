#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_array - This function permit to print an array
 * @array: Pointer to the first element
 * @l: The start index to print
 * @r: The last index to print
 * Return: Nothing
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i < r)
			printf(", ");
	}
	printf("\n");
}
/**
 * advanced_binary - This function search a value in an array of integers
 * using the binary search algorithm
 * @array: An pointer to the first element of the array to search in
 * @size: The size of the array
 * @value: The value to search
 *
 * Return: -1 or 0
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t  m, l, r;
	int result;

	if (!array || size == 0)
		return (-1);
	l = 0;
	r = size - 1;
	print_array(array, l, r);
	if (l == r)
		return (-1);
	m = (l + r) / 2;
	if (array[m] < value)
	{
		result = advanced_binary(array + (m + 1), r - m, value);
		if (result == -1)
			return (-1);
		else
			return (m + 1 + result);
	}
	else if (array[m] > value)
		return (advanced_binary(array, m - l, value));
	else
		return (m);
	return (-1);
}
