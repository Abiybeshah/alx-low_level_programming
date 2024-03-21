#include "lists.h"
/**
* dlistint_len - returns the num of elem in a linked
* distint_t list
* @h: pntr to the list
* Return: num of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t count = 0;

	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}
