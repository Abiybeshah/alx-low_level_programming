#include "main.h"
#include <stdlib.h>
/**
* _memset - fills the mem with a const byte
* @s: mem area to be filled
* @b: char to copy
* @n: no. of times to copy b
* Return: pointer to the mem area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
* _calloc - allocates mem for an array
* @nmemb: no. of elements in the array
* @size: size of each element
* Return: pointer to alloc mem
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(size * nmemb);
	if (str == NULL)
		return (NULL);
	_memset(str, 0, nmemb * size);

	return (str);
}
