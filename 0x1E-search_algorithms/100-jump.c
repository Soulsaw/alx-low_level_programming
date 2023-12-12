#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"
/**
 * min - This function return the minimum number between a and b
 * @a: The first integer
 * @b: The second integer
 * Return: The min of a and b
 */
size_t min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	else
		return (b);
}
/**
 * jump_search - This function search a value in an array of integer
 * using the lineary search algorithms
 * @array: An pointer to the first element of the array
 * @size: The size of the integer
 * @value: The value to search
 *
 * Return: -1 or 0
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev;

	if (!array)
		return (-1);
	prev = 0;
	step = 0;
	while (array[min(step, size)]  < value)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);
	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == step + 1 || prev == size)
			return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	if (array[prev] == value)
		return (prev);
	return (-1);
}
