#include "main.h"

/**
 * free_grid - removing memory allocation
 * @grid: memory block to be freed
 * @height: height of the array
 * Return: returns void
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
