#include "main.h"
/**
* _memcpy - copy data form src to dest
* @dest: input
* @src: input
* @n: input
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
