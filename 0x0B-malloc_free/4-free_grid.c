#include "main.h"

/**
 * free_grid - free memory of 2d array
 *
 * @grid: pointer to a array
 * @height: the height of the array
 *
 * Retrun: void value
*/

void free_grid(int **grid, int height)
{
	int n = 0;

	while (n < height)
	{
		free(grid[n]);
		n++;
	}
	free(grid);
}
