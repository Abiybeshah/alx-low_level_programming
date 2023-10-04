#include "main.h"
#include <stdlib.h>
/**
* _strdup - this function returns a pointer to a newly allocated space
* @str - pointer to allocated memory
* Return - pointer to the allcoated memory or NULL if it fails
*/

char *_strdup(char *str)
{
	int i;
	int j;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
		i++;

	s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
		return (NULL);

	for (j = 0 ; str[j] ; j++)
		s[j] = str[i];
	return (s);
}
