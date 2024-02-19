#include "main.h"
/**
 *alloc_grid - Returns to a 2 dimensional array
 *@width: Width of the 2 dimensional array
 *@height: Height of the 2-dimensional array
 *Return: A pointer to a 2-dimensional array of integers
 **/
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	matrix = malloc(sizeof(int) *  (width * height));
	if (matrix == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= width - 1; i++)
	{
		matrix[i] = malloc(sizeof(int) * height);
	}
	for (i = 0; i <= width - 1; i++)
	{
		matrix[i][j] = 0;
		j++;
	}
	return (matrix);
}
