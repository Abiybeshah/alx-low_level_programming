#include "main.h"
/**
* cap_string - capitalize all strings
* @n: input for string
* Return: char
*/

char *cap_string(char *n)
{
	int i;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
			i++;
		}
	}
	return (n);
}
