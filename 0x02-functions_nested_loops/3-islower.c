#include "main.h"
/**
* _islower - Entry point checks if the character is upper or not
* @c: the character that is going to be checked
* Return: 1 if lowercase 0 if otherwise
*/
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
