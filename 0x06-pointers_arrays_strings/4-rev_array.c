#include "main.h"
/**
* reverse_array - reverse the order of the array
* @a: input for int pointer
* @n: input for number of elemets of the array
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i;
	int m;

	for (i = 0 ; i < n ; i++)
	{
		m = a[i];
		a[i] = a[n - i];
		a[n] = m;
	}
}
