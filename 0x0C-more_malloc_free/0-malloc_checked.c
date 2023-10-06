#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - this fun allocates memory using malloc
* @b: no. of bytes to allocate
* Return: returns 98 if fail pointer to allocated mem
*/

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
