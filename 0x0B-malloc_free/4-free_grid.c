#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * free_grid - creats an array
 * @grid: size of array
 * @height: innitialised with
 */

void free_grid(int **grid, int height);
{
	int **arr;
	int i = 0;

	if (grid == '\0' || height <= 0)
		return;

	while (i < height)
	{
		free(grid[a]);
		i++;
	}
	free(grid);
}
