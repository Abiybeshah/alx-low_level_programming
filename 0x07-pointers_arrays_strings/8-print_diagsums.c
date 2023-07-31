#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of a square matrix of integes
* @a: input
* @size: input
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int sum1 = 0;

	for (i = 0 ; i < size ; i++)
	{
		sum += a[i];
		a += size;
	}
	a -= size;

	for (i = 0 ; i < size ; i++)
	{
		sum1 += a[i];
		a -= size;
	}
	printf("%d, %d\n", sum, sum1);
}
