#include "main.h"
/**
* print_last_digit - Entry point
* @n: the value being cheked
* Return: the value of the lset digit
*/

int print_last_digit(int n)
{
	int las;

	las = n % 10;
	if (n < 0)
	{
		las = las * -1;
	}
	_putchar(las + '0');

	return (las);
}
