#include "main.h"
/**
* print_numbers - print the number n
* @n: input for the function
* Return: void
*/

void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	if (n / 10 != 0)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}
