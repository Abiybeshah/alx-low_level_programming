#include <stdlib.h>
#include "main.h"
/**
* array_range - creates an array of integers
* @min:input for minimum
* @max: input for maximum
* Return: if min > max return NULL if fail return NULL
*/

int *array_range(int min, int max)
{
	int *ptr;
	int n;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);

	for (n = 0 ; min <= max ; n++)
		ptr[n] = min++;

	return (ptr);
}
