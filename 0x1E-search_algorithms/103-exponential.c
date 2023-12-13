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
 * binary_search_exp - This function search a value in an array of integers
 * using the binary search algorithm
 * @array: An pointer to the first element of the array to search in
 * @l: The start of the array
 * @r: The end of the array
 * @value: The value to search
 *
 * Return: -1 or 0
 */
int binary_search_exp(int *array, size_t l, size_t r, int value)
{
	size_t  m;

	if (!array)
		return (-1);
	printf("Value found between indexes [%ld] and [%ld]\n", l, r);
	while (l <= r)
	{
		print_array(array, l, r);
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
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
 * exponential_search - This function search a value in an array of integers
 * using the binary search algorithm
 * @array: An pointer to the first element of the array to search in
 * @size: The size of the array
 * @value: The value to search
 *
 * Return: -1 or 0
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t exp;

	if (!array)
		return (-1);
	if (array[0] == value)
		return (0);
	exp = 1;
	while (exp < size && array[exp] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", exp, array[exp]);
		exp *= 2;
	}
	return (binary_search_exp(array, exp / 2, min(exp, size - 1), value));
}
