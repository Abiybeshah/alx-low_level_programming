#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - returns a pointer to a 2 dimensional array of int
* @width: input for width
* @height: input for height
* Return: returns NULL if fails or 2 dimenstional grid if sucess
*/

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0 ; i <= height ; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (; i >= 0 ; i--)
				free(grid);
			return (NULL);
		}
	}
	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
			grid[i][j] = 0;
	}
	return (grid):
}
