#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - frees the 2 dimenstional grid
* @grid: input for the grid
* @height: input for the height
* Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
