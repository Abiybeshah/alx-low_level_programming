#include "main.h"
/**
* _sqrt_recursion - returns the natural square root of the number
* @n: input for the value
* @i: input for iterator
* Return: n
*/

int recursion(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (recursion(n, 0));
}
/**
* recursion - recurs to find the natural sq root of the number
* @n: number to calculate the sq root
* @i: iterator
* Return: the square root
*/

int recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (recursion(n, i + 1));
}
