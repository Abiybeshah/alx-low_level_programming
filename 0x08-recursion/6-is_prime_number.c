#include "main.h"
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
	return (prime(n, n - 1));
}

/**
* prime -  calecuates if the number is prime or not
* @n: input for the value
* @i: iterator
* Return: 1 if n is prime 0 if not
*/

int prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (prime(n, i - 1));
}
