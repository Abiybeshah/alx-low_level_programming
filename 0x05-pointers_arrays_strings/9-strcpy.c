#include "main.h"
/**
* _strcpy - cpoy a string ponited to by src
* @dest: value of char
* @src: value of char2
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + 1) != '\0')
	{
		i++;
	}
	for ( ; j < 1 ; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\n';
	return (dest);
}
