#include "main.h"
#include <stdio.h>

/**
* main - updates the value of n to 98
*
* Return: void
*/

int main(void)
{
	int n = 402;

	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
