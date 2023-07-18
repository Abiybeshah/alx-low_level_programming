#include "main.h"
/**
* print_to_98 - Entry point
* @n: the value
* Return: void
*/

void print_to_98(int n)
{
	while (n < 98 && n != 98)
	{
		putchar(n + '0');
		n++;
	}
	while (n > 98 && n != 98)
	{
		_putchar(n + '0');
		n--;
	}
}
