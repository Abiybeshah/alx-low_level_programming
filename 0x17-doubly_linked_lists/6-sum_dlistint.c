#include "lists.h"
/**
* sum_dlistint - returns the sum of all the distit_t
* @head: pntr to the list
* Return: sum of all data in the list
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
