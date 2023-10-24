#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint - this function adds a new node
* @head: head pointer
* @n: int add the list
* Return: the adress of new elemnt or NULL if failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
