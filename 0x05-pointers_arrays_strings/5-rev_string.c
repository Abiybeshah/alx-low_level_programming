#include "main.h"
/**
* rev_string - reversing a string
* @s: the input character
* Return: void
*/

void rev_string(char *s)
{
	char rev = s[0];
	int n = 0;
	int i;

	while (s[n] != '\0')
		n++;
	for (i = 0 ; i < n ; i++)
	{
		n--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}