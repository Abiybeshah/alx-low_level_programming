#include "main.h"
/**
* _strncat - this concatenates two strings but with a limit of n on src
* @dest: input of a char
* @src: input of a char
* @n: input for the limit
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
