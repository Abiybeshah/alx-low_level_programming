#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _strdup - this function returns a pointer
* @str: pointer to a string
* Return: if fail returns NULL if success return duplicated string
*/

char *_strdup(char *str)
{
	char *dup;
	int i;
	int j;

	j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	dup = malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
		return (NULL);
	for (j = 0 ; str[j] ; j++)
		dup[j] = str[j];

	return (dup);
}
