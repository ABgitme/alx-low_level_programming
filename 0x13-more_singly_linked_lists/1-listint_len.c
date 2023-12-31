#include "lists.h"
/**
 * listint_len - A function that returns the number of elements in the list
 * @h: A pointer to listint_t structure
 * Return: number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	for (; h; h = h->next)
	{
		count++;
		if (!h->next)
			break;
	}
	return (count);
}
