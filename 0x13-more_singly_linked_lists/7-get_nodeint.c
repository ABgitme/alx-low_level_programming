#include "lists.h"

/**
 * list_size - A function that gets a node of list at specific index
 * @h: A pointer to listint_t structure
 * Return: number of nodes
 */
unsigned int list_size(listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * get_nodeint_at_index - A function that gets a node of list at specific index
 * @head: A pointer to listint_t structure
 * @index: The index of the node
 * Return: A pointer to node at specified index, or NULL if not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	if (head == NULL || index >= list_size(head))
		return (NULL);
	current = head;
	for (i = 0; i < index; i++)
		current = current->next;
	return (current);
}
