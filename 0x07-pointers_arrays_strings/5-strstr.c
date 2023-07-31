#include "main.h"
/**
* _strstr - this is a function that locates a substring
* @haystack: pointer to be checked
* @needle: pointer to be checked against
* Return: haystack
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;
			}
				while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
