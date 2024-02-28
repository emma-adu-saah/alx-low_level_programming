#include "main.h"
/**
 *free_grid - Frees a 2 dimensional grid
 *@grid: A two dimensional grid to be freed
 *@height: height(rows) of the grid
 *Return: Nothing
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
