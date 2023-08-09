#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees allocated memory
 * @grid: memory
 * @height: height
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}