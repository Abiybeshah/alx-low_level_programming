#include "function_pointers.h"
#include "stdio.h"

/**
* int_index - return index place if comp true
* @array: array
* @size: size of elemets in array
* @cmp: pointer to func of one of the 2 in main
* Return: 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
