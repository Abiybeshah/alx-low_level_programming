#include "main.h"

/**
* _puts - prints a string to stdout
* @str: the input
* Return: void
*/

void _puts(char *str)
{
	char length;

	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
	
}
