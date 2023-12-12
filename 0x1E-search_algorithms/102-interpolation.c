#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * interpolation_search - This function search a value in an array of integer
 * using the interpollation search algorithms
 * @array: An pointer to the first element of the array
 * @size: The size of the integer
 * @value: The value to search
 *
 * Return: -1 or 0
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (!array)
		return (-1);
	while ((array[high] != array[low]) && (value >= array[low])
			&& (value <= array[high]))
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) *
				(value - array[low]));
		if (array[pos] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			low = pos + 1;
		}
		else if (value < array[pos])
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			high = pos - 1;
		}
		else if (value == array[pos])
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			return (pos);
		}
		else
			return (-1);

	}
	pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
	if (pos > size)
		printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
