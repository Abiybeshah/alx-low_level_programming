#include "main.h"

/**
* swap_int - swap the two integers
* @a: the value of the int
* @b: the value of the int
* Return: void
*/

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
