#include "main.h"
/**
* leet - encodes the string to 1337
* @n: is the input of char
* Return n
*/

char *leet(char *n)
{
	int i;
	char m[] = "aAeEoOtTlL";
	int k[] = "4433007711";

	while (n[i] != '\0')
	{
		int j;
		while (j < 10)
		{
			if (m[j] == n[i])
			{
				n[i] == m[j];
			}
			j++
		}
		i++
	}
	return (n);
}
