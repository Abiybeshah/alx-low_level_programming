#include "main.h"
/**
* print_sign - Entry point
* @n: the number to be checked
* Return: 1 if n is greater then 0 0 if n is 0 -1 if n is less than 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n <= 0)
	{
		return (-1);
	}
}
