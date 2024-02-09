#include "main.h"

/**
* binary_to_uint - function converts bin to dec
* @b: pointer to the binary number
* Return: returns o if null or if b is not 1 or 0.
*/

unsigned int binary_to_uint(const char *b)
{
	int n;
	int ind;

	if (!b)
		return (0);
	for (ind = 0; b[ind] != '\0'; ind++)
	{
		if (b[ind] != '0' && b[ind] != '1')
			return (0);
	}
	for (ind = 0; b[ind] != '\0'; ind++)
	{
		n <<= 1;
		if (b[ind] == '1')
			n += 1;
	}
	return (n);
}
