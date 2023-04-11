#include "main.h"

/**
 * alloc_grid - This function return pointer to a 2 dimensional
 * @width: The width of grid
 * @height: The height of the grid
 * Return: grid or NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int index_width, index_height;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (index_height = 0; index_height < height; index_height++)
	{
		grid[index_height] = (int *)malloc(width * sizeof(int));
		if (grid[index_height] == NULL)
			return (NULL);
	}

	for (index_height = 0; index_height < height; index_height++)
	{
		for (index_width = 0; index_width < width; index_width++)
			grid[index_height][index_width] = 0;
	}


	return (grid);
}
