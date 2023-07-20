#include "main.h"
/**
* _isupper  - this program checks for uppercase letters
* @c: is the char to be checked
* Return: 0 if lowercase 1 if uppercase
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
