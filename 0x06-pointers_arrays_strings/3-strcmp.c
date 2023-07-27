#include "main.h"
/**
*_strcmp - this function prints two strings
* @s1: input of string
* @s2: input of string
* Return: 0 Successful
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
