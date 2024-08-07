#ifndef SEARCH_ALGIS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
* struct_listint_s - singly linked list
* @n: integer
* @index: index of the node in the list
* @next: pointer to the next node
* Description: singly linked list node structure
*/

typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
* struct skpilist_s - singly linked list with an express lane
* @n: integer
* @index: index of the node in the list
* @next: poniter to the next node
* @express: pointer to the next node in the expression
* Description: singly linked list node structure with an express liine
*/

typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
