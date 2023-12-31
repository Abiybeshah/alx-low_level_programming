#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* list_len - return the num of elements
* @h: pointer to the list_t list
* Return: number of elements
*/

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
