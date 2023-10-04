#include "main.h"
#include <stdlib.h>
/**
* argstostr - concatenates all the args
* @ac: input
* @av: input
* Return: NULL if ac == 0 or av == NULL
*/

char *argstostr(int ac, char **av)
{
	int h;
	int i;
	int j;
	int k;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] ; j++)
			i++;
	}
	k += ac;

	str = malloc(sizeof(char) * k + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] ; j++)
		{
			str[h] = av[i][j];
			h++;
		}
		if (str[h] == '\0')
		{
		str[h++] = '\n';
		}
	}
	return (str);

}
