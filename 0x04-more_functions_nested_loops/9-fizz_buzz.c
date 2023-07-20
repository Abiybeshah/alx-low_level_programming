#include <stdio.h>
/**
* main - print 1-100 and replace multiples of 3 by fizz and multiples of 5 by buzz and for both fizzbuzz
*
* Return: 0 Successful
*/

int main(void)
{
	int i;
	
	for (i = 0 ; i <= 100 ; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
