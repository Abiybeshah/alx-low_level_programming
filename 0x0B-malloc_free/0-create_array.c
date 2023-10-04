#include "main.h"
#include <stdlib.h>
/**
* create_array - creates array of chars
* @size - size of the array
* @c - the char to print
* Return - pointer to array or NULL if fail or error
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);
	if (s == NULL || size == 0)
	{
		return (NULL);
	}
	
	for (i = 0 ; i < size ; i++)
		s[i] = c;
	return (s);

}
