#include "main.h"
#include <stdio.h>

/**
* print_to_98 - Entry point
* @n: the value
* Return: void
*/

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d", n);
		if (n < 98)
		{
			printf(", ");
		}
		n++;
	}
	while (n > 98)
	{
		printf("%d", n);
		if (n > 98)
		{
			printf(", ");
		}
		n--;
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
