#include "main.h"
/**
* is_prime_number - returns 1 if it is prime number or 0 if otherwise
* @n: input
* @i: iterator
* Return: 1 if prime or 0 if not
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime(n, 2));
	}
}
/**
* prime -  checks if the number is prime
* @n: input of the number to be checked
* @i: iterator
* return: 0 if not prime 1 if prime
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
}
