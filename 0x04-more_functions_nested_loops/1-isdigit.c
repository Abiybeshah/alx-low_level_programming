#include "main.h"
/**
* _isdigit - this function checks if the variable is a digit
* @c: the value to be checked
* Return: 1 if c is a digit 0 if it is otherwise
*/

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return(0);
}
