#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node - adds a new node at the beginning of a linked list
* @head: double pnter to the list_t list
* @str: new str to add in the node
* Return: the address of the new elem or NULL if fail
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length = 0;

	while (str[length])
		length++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = length;
	new->next = *head;
	*head = new;

	return (new);
}
