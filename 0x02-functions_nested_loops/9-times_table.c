#include "main.h"
/**
* times_table - Entry point
*
* Return: 0
*/
void times_table(void)
{
	int n;
	int m;

	for (n = 0 ; n <= 9 ; n++)
	{
		for (n = 0; n <= 9 ; n++)
		{
			if (!(n <= 1))
			{
				m = n * 2;
				_putchar(n);
				_putchar(44);
				_putchar(' ');
			}
		}
	}
}
