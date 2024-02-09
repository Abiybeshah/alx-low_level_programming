#include "main.h"

/**
* pow_er - function thar returns the power of a base b number to n
* @base: the base of the exponent
* @power: the power of the exponent
* Return: value of the exponent
*/

unsigned long int pow_er(unsigned int base, unsigned int power)
{
	unsigned long int exp;

	unsigned int ind;

	exp = 1;
	for (ind = 1; ind <= power; ++ind)
		exp *= base;
	return (exp);
}
/**
* print_binary - prints a number in bin notation
* @n: nuber to print
* Return: void
*/

void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;

	divisor = pow_er(2, sizeof(unsigned long int) * 8 - 1);

	while (divisor != 0)
	{
		flag = 1;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
