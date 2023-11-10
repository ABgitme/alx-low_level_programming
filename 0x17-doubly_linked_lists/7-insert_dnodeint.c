#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node node at a given position
 * in a dlistint_t list.
 * @h: pointer to the list.
 * @idx: position to add the node.
 * @n: data for the new node.
 * Return: the address of the new node, or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *prev_node, *next_node;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*h == NULL || idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		*h = new_node;
	}
	else
	{
		prev_node = *h;
		for (i = 0; i < idx - 1; i++)
		{
			prev_node = prev_node->next;
			if (prev_node == NULL)
			{
				/*The index is out of bounds.*/
				free(new_node);
				return NULL;
			}
		}
		next_node = prev_node->next;
		new_node->next = next_node;
		new_node->prev = prev_node;
		prev_node->next = new_node;
		if (next_node != NULL)
		{
			next_node->prev = new_node;
		}
	}
	return (new_node);
}
