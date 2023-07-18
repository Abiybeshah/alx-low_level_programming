#include "main.h"

/**
* _isalpha - Entry point this checks for alphabetic characters
* @c: is the character being checked
* Return: 1 if upper or lower case 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) && (c >= 97 && c <= 122))
		return (1);
	return (0);
}
