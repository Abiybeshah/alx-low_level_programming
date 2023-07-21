#include <stdio.h>
/**
* main - print 1-100
*
* Return: 0 Successful
*/

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i == 1)
		{
			printf("%d ", i);
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
