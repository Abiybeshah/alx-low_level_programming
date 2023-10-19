#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
*add_node_end - adds a new node at the end
* @head: double pointer to the list
* @str: string to put in the new node
* Return: str to put in the new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new = NULL)
		return (NULL);

	new->str= strdup(str);

	for (n = 0 ; str[n] ; n++)
		;

	temp = *head;
	new->len = n;
	new->next = NULL;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
