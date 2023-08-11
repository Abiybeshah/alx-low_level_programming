#include <stdlib.h>
#include "main.h"
/**
* string_nconcat - this function concatenates two strings
* @s1: input for argument
* @s2: input for argument
* @n: input for
* Return: if fail NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int i = 0;
	int j = 0;
	int len1 = 0;
	int len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len2 + len1 + 1));
	if (!s)
		return (NULL);
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
		s[i++] = s2[j++];
	while (n >= len2 && i < (len1 + len2))
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);

}
