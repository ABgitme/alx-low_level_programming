#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: pointer to the first node
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int sub;
	listint_t *tmp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		sub = *h - (*h)->next;
		if (sub > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
