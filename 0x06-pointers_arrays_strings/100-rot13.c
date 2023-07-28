#include "main.h"
/**
* rot13 - uses the rot 13 encryption
* @n: the input in char
* Return: n
*/

char *rot13(char *n)
{
	int i;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int j;

	i = 0;
	while (n[i] != '\0')
	{
		j = 0;
		while (j <= 52)
		{
			if (n[i] == a[j])
			{
				n[i] = b[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (n);
}
