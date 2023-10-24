#include "lists.h"
#include <stdio.h>

/**
* print_listint - prints all the elem of listint
* @h: head of the link list nodes
* Return: the num of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
