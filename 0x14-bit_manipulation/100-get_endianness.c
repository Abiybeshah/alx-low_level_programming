#include "main.h"

/**
* get_endianness - checks the endianness
* Return: 0 fi big endian 1 if little endian
*/

int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *) &a;
	return (*b);
}
