#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - this function frees the 2 dimensional grid
* @grid: the 2 dimensional grid
* @height: the height of the array
* Return: freed array
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
