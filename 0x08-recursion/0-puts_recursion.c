#include "main.h"
/**
* _puts_recursion - this function prints a string followed by a newline
* @s: input in char
* Return: void
*/

void _puts_recursion(char *s)
{
	int i;

	if (s[i] != '\0')
	{
		_puts_recursion(s + 1);
	}
}
