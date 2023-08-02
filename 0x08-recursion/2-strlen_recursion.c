#include "main.h"
/**
* _strlen_recursion - returns the length of the string
* @s: input for char
* Return: n
*/

int _strlen_recursion(char *s)
{
	int n;

	if(*s != '\0')
	{
		_strlen_recursion(s + 1);
		n++;
	}
	return (n);
}
