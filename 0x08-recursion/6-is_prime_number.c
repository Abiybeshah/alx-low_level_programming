#include "main.h"
/**
* prime - calculates if the number is prime or not
* @n: the value
* @i: iterator
* Return: 1 if prime 0 if not 
*/

int prime(int n, int i)
{
	if (i < n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (prime(n, i + 1));
		}
	}
	else
	{
		return (1);
	}
}
/**
* is_prime_number - returns 1 if the number is prime or 0  if not
* @n: input of the number
* @i: iterator
* Return: 1 if true 0 if not
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));
}
