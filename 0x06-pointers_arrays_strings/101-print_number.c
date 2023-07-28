#include "main.h"
/**
* print_number - print a number n
* @n: input for n
* Return: void
*/

void print_numbers(int n)
{
	unsigned int m;

	m = n;
	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	if (m / 10 != 0)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}
