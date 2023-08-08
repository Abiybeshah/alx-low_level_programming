#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - concatenates two strings
* @s1: input for string one
* @s2: input fir string two
* Return: returns NULL if fail if successful it returns s1 concatenated with s2
*/

char *str_concat(char *s1, char *s2)
{
	char *con;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	con = malloc(sizeof(char) * (i + j + 1));
	if (con == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		con[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		con[i] = s2[j];
		i++, j++;
	}
	con[i] = '\0';
	return (con);
}
