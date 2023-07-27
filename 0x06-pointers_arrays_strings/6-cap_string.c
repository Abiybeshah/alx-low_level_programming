#include "main.h"
/**
* cap_string - capitalize all words of a string
* @n: input in char
* Return: char
*/

char *cap_string(char n*)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] + 32;
		}
		i++;
	}
	return(n);
}
