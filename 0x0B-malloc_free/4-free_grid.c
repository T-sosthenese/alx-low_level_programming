#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the grid that was previously created
 * @grid: The grid to be freed
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
