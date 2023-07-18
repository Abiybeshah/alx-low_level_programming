#include "main.h"
/**
* jack_bauer - Entry point
*
* Return: void
*/
void jack_bauer(void)
{
	int n, m, o, p;

	for (n = 0 ; n <= 2 ; n++)
	{
		for (m = 0 ; m <= 9 ; m++)
		{
			if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
			{
			for (o = 0 ; o <= 5 ; o++)
			{
				for (p = 0 ; p <= 9 ; p++)
				{
					_putchar(n + '0');
					_putchar(m + '0');
					_putchar(58);
					_putchar(o + '0');
					_putchar(p + '0');
					_putchar('\n');
				}
			}
			}
		}
	}
}
