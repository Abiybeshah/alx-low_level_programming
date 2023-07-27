#include "main.h"
/**
* leet - encodes the string to 1337
* @n: is the input of char
* Return: n
*/

char *leet(char *n)
{
	int i;
	int j;
	char m[] = "aAeEoOtTlL";
	char k[] = "4433007711";

	i = 0;
	j = 0;
	while (n[i] != '\0')
	{
		while (j < 10)
		{
			if (m[j] == n[i])
			{
				n[i] == k[j];
			}
			j++;
		}
		i++;
	}
	return (n);
}
