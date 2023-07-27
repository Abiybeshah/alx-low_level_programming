#include "main.h"
/**
* cap_string - capitalize all words of a string
* @n: input in char
* Return: char
*/

char *cap_string(char n*)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] == ' ' || n[i] == '\t' || n[i] == '\n' || n[i] == ',' || n[i] == ';' || n[i] == '.' || n[i] == '!' || n[i] == '?' || n[i] == '"' || n[i] == '(' || n[i] == ')' || n[i] == '{' || n[i] == '}')
		{
			if (n[i + 1] >= 97 && n[i + 1] <= 122)
			{
				n[i + 1] = n[i +1] - 32;
			}
		}
	return(n);
}
