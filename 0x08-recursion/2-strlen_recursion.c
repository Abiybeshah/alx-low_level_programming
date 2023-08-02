#include "main.h"
/**
* _strlen_recursion - returns the length of the string
* @s: input for char
* Return: n
*/

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if(*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
