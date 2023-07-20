#include "main.h"
/**
* print_diagonal - prints diagonals diagonally
* @n: the number times \ should be printed
* Return: void
*/

void print_diagonal(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		_putchar(32);
		if (i == n)
		{
			_putchar(47);
		}
	}
}
