#include "main.h"
/**
* cap_string - capitalize all strings
* @n: input for string
* Return: n
*/

char *cap_string(char *x)
{
	int i;

	i = 0;
	while (x[i] != '\0')
	{
		if (x[i] >= 97 && x[i] <= 122)
		{
			x[i] = x[i] - 32;
		}
		i++;
	}
	return (x);
}
