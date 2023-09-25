#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node at
 * specified index from list
 * @head: A pointer to listint_t structure
 * @index: The index of the node to delete
 * Return: 1 if succeeded, or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_to_delete;
	listint_t *prev_node;
	unsigned int i;
	
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
	node_to_delete = *head;
	*head = node_to_delete->next;
	free(node_to_delete);
	return (1);
	}
	else
	{
	prev_node = *head;
	for (i = 0; i < index - 1; i++)
	{
		prev_node = prev_node->next;
		if (prev_node == NULL)
			return (-1); 
    }
	node_to_delete = prev_node->next;
	prev_node->next = node_to_delete->next;
	}
	free(node_to_delete);
	return (1);
}
