#include "lists.h"

/**
 * list_len - gets the number of nodes of linked list
 * @h: head of linked list
 * Return: number of elements as size_t
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

