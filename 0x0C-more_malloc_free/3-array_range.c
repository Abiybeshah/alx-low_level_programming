#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of ints
* @min: min range of values stored
* @max: max range of values stored
* Return: pointer to the new array
*/

int *array_range(int min, int max)
{
	int *str;
	int i;
	int size;

	if (min > max)
	return (NULL);

	size = max - min + 1;

	str = malloc(sizeof(int) * size);

	if (str == NULL)
		return (NULL);

	for (i = 0 ; min <= max ; i++)
		str[i] = min++;

	return (str);
}
