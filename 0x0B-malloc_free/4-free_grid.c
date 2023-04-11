#include "main.h"

/**
 * free_grid - This function frees 2 dimensional grid previously created
 * @grid: The width of grid
 * @height: The height of the grid
 */
void free_grid(int **grid, int height)
{
	int index_height;

	for (index_height = 0; index_height <= height; index_height++)
	{
		free(grid[index_height]);
	}

	free(grid);
}
