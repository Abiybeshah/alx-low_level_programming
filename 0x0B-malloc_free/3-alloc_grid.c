#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - returns a pointer to a two dimensional array
* @width: input for the width
* @height: input for the weight
* Return: NULL on failure 0 or negative
*/

int **alloc_grid(int width, int height)
{
	int **m;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	m = malloc(sizeof(int *) * height);

	if (m == NULL)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		m[i] = malloc(sizeof(int) * width);
		if (m[i] == NULL)
		{
			for (; i >= 0 ; i--)
				free(m[i]);
			free(m);
			return (NULL);
		}
	}
	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
			m[i][j] = 0;
	}
	return (m);
}
