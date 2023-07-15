#include <stdio.h>
#include <stdlib.h>
/**
   * main - Entry point
    *
     * Return: Always 0 (Success)
      */
int main(void)
{
	int n;
	int m;

		for (n = 0 ; n < 100 ; n++)
		{
			for (m = 0 ; m < 100 ; m++)
			{
				if (m < n)
				{
					putchar((n / 10) + 48);
					putchar((n % 10) + 48);
					putchar(' ');
					putchar((m / 10) + 48);
					putchar((m % 10) + 48);
					if (n != 99 || m != 99)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	putchar('\n');
	return (0);
}
