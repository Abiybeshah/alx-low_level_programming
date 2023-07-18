#include "main.h"
/**
* _abs - Entry point
* @c: the value being checked
* Return: 0 Successful
*/
int _abs(int c)
{
	int neg;

	if (c < 0)
	{
		neg = c * -1;
		return (neg);
	}
	return (c);
}
