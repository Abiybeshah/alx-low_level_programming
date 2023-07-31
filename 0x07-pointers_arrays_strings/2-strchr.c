#include "main.h"
/**
* _strchr - locates a char in a string
* @s: is a pointer
* @c: the input for the char
* Return: s
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
	if (s[i] == c)
	{
		return (s + i);
	}
	}
	return ('\0');
}
