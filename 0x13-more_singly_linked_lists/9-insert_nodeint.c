#include "lists.h"
#include <stdio.h>

/**
 * list_length - A function that gets a node of list at specific index
 * @h: A pointer to listint_t structure
 * Return: number of nodes
 */
unsigned int list_length(listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * insert_nodeint_at_index - A function that inserts node at given index
 * @head: A pointer to listint_t structure
 * @idx: The index of the list
 * @n: An integer data for new node
 * Return: The address to new node at specified index, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	unsigned int i;
	listint_t *prev_node;

	if (idx > list_length(*head))
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	prev_node = *head;
	for (i = 0; i < idx - 1; i++)
	{
		prev_node = prev_node->next;
	}
	new_node->next = prev_node->next;
	prev_node->next = new_node;
	return (new_node);
}
