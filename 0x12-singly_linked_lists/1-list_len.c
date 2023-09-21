#include "lists.h"

/**
 * list_len - gets the number of nodes of linked list
 * @h: head of linked list
 * Return: number of elements as size_t
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	else
		return (1 + list_len(h->next));
}

