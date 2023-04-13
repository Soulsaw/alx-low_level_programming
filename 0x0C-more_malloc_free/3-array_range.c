#include "main.h"

/**
 * array_range - The functions that creates an array of integers
 * @min: The min value
 * @max: The max values
 * Return: Pointer to the array integers
 */

int *array_range(int min, int max)
{
	int *array, index, i;

	if (min > max)
		return (NULL);

	array = (int *) malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);
	i = 0;
	for (index = min; index <= max; index++)
	{
		array[i] = index;
		i++;
	}

	return (array);
}
