#include "lists.h"
/**
* get_dnodeint_at_index - return the nth node
* @head: pntr to the list
* @index: nth node
* Return: nth node, if the node doesn
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int count = 0;

	while (node && count != index)
	{
		count++;
		node = node->next;
	}
	if (node && count == index)
		return (node);
	return (NULL);
}
