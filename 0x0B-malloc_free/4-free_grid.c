#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - use free function on previous grid
 * @grid: 2 dim. array to free
 * @height: input height (size)
 * Return: free'd grid
 */
void free_grid(int **grid, int height)
{
	int r;

	if (grid != NULL || height != 0)
	{
		for (r = 0; r < height; r++)
		{
			free(grid[r]);
		}
		free(grid);
	}
}
