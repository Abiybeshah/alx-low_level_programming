#include "main.h"
/**
* jack_bauer - Entry point
*
* Return: 0 Successful
*/
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0 ; hour < 24 ; hour++)
	{
		for (minute = 0 ; minute < 60 ; minute++)
		{
			_putchar(hour + '0');
			_putchar('58');
			_putchar(minute + '0');
			_putchar('\n');
		}
	}

}
