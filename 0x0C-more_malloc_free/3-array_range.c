#include "main.h"

/**
 * array_range - The functions that creates an array of integers
 * @min: The min value
 * @max: The max values
 * Return: Pointer to the array integers
 */

int *array_range(int min, int max)
{
	int *array, index;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (index = 0; index <= max - min; index++)
	{
		array[index] = min + index;
	}

	return (array);
}
