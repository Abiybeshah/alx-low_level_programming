#include "main.h"
#include <stdlib.h>

/**
* _realloc - realloc a mem block with malloc&free
* @ptr: pointer to the mem prev alloc by malloc
* @old_size: size of the alloc mem for ptr
* @new_size: new size of the new mem block
* Return: pointer to the newly alloc mem block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	str = malloc(new_size);
	if (!str)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0 ; i < new_size ; i++)
			str[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0 ; i < old_size ; i++)
			str[i] = old_ptr[i];
	}
	free(ptr);
	return (str);
}
