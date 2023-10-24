#include "lists.h"

/**
* listint_len - the num of elem in the linked list
* @h: head pntr
* Return: the num of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
