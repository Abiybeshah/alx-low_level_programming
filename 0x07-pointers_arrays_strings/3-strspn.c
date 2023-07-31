#include "main.h"
/**
* _strspn - this function gets the length of a prefix substring
* @s: input
* @accept: input
* Return: n
*/

unsigned int _strspn(char *s, char *accept)
{
	int n;
	int i;

	n = 0;
	while (*s)
	{
		for (i = 0 ; accept[i] ; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
}
