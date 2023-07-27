#include "main.h"
/**
* cap_string - capitalize all strings
* @n: input for string
* Return: n
*/

char *cap_string(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 97 && n[i] <= 122)
		{
			n[i] = n[i] - 32;
		}
		i++;
	}
	return (n);
}
