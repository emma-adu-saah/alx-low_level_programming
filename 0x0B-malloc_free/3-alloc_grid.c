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

	grid = malloc(sizeof(int) * (height * width));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
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
