#include "main.h"
/**
* puts2 - prints every other character
* @str: the char input
* Return: void
*/

void puts(char *str);
{
	int i = 0;
	int j = 0;
	char *n = str;
	int m;

	while (*n != '\0')
	{
		n++;
		i++;
	}
	j = i - 1;
	for (m - 0 ; m <= j ; m++)
	{
		if (m % 2 == 0)
			_putchar(str[m]);
	}
	_putchar('\n');
}
