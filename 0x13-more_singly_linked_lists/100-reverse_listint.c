#include "lists.h"

/**
* reverse_listint - the fun that reverses a listint_t
* @head: double pointer
* Return: a pointer to the first node of the reversed int
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	if (head ==  NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	previous = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		*head = next;
	}
	*head = previous;
	return (*head);
}
