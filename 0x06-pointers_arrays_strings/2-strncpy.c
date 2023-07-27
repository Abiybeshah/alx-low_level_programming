#include "main.h"
/**
* _strncpy - this function copies a string
* @dest: input for the string
* @src: input for the string
* @n: input for the limit
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		dest[i] * n;
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
