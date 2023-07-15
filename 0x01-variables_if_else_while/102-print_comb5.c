#include <stdio.h>
/**
   * main - Entry point
    *
     * Return: Always 0 (Success)
      */
int main(void)
{
	int n;
	int m;
	int o;
	int p;
	for (n = 0 ; n < 9 ; n++)
	{
		for (m = 0 ; m < 9 ; m++)
		{
			for (o = 0 ; o < 9 ; o++)
			{
				for (p = 0 ; p < 9 ; p++)
				{
					if (!(n == m || m == o || o == p || n == p))
					{

					}
				}
			}
		}
	}
	    return (0);
}
