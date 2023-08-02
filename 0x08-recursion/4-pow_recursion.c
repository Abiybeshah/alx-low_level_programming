#include "main.h"
/**
* _pow_recursion - this function returns x the power of y
* @x: input for the number
* @y: input for the power to be rasied to
* Return: n
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	return (x * _pow_recursion(x, y - 1));
}
