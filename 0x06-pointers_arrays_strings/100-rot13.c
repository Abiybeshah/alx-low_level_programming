#include "main.h"
/**
* rot13 - uses the rot 13 encryption
* @n: the input in char
* Return: n
*/

char *rot13(char *n)
{
	int i;
	char a[] = "abcdefghijklmopqrstuvwxyz";
	char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char B[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char b[] = "nopqrstuvwxyzabcdefghijklm";
	int j;

	i = 0;
	while (n[i] != '\0')
	{
		j = 0;
		while (j <= 26)
		{
			if (n[i] == a[j] || n[i] == A[j])
			{
				n[i] = b[j + 1];
				n[i] = B[j + 1];
			}
			j++;
		}
		i++;
	}
	return (n);
}
