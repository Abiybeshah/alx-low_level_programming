#include <stdio.h>
/**
* main - Entry point
*
* Return: o Successful
*/

int main(void)
{
	int i;
	long j = 1;
	long k = 2;

	while (i <= 98)
	{
		if (i == 0)
		{
			printf("%ld", j);
		}
		if (i == 1)
		{
			printf(", %ld", k);
		}
		k += j;
		j = j - k;
	}
	printf("\n");
	return (0);
}
