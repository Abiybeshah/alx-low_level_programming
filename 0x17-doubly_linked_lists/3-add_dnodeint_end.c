#include "lists.h"
/**
* add_dnodeint_end - adds a new node at the end of a distint_t 
* @head: pntr to the first elem of the list
* @n: int to set in the new node
* Return: adress of the new elem
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		new->prev = aux;
		aux->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}
	return (new);
}
