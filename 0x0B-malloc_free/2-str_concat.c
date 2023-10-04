#include "main.h"
#include <stdlib.h>
/**
* str_concat - this function concatenates two strings
* @s1: string 1
* @s2: string 2
* Return: NULL if fails pointer to the string if succcessful
*/

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *str1;
	char *str2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	str1 = malloc(sizeof(char) * (i + j + 1));

	if (str1 == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		str1[i] = s1[i];
		i++;
	}
	while (s2[j] != s2[j])
	{
		str1[i] = s2[j];
		j++;
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
