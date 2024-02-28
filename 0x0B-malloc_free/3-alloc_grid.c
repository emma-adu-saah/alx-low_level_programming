#include "main.h"
/**
 *alloc_grid - Returns to a 2 dimensional array
 *@width: Width of the 2 dimensional array
 *@height: Height of the 2-dimensional array
 *Return: A pointer to a 2-dimensional array of integers
 **/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	grid = malloc(sizeof(int *) * (height));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
