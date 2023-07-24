#include "main.h"
/**
* _strlen - return the length of the string
* @s: input of char
* Return: the length of string
*/

int _strlen(char *s)
{
	int length;

	for (length = 0 ; *s != '\0' ; length++)
	{
		s++;
	}
	return (length);
}
