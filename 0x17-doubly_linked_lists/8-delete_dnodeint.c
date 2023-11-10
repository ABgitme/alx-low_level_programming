#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer to the list.
 * @index: position of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *next_node;
	unsigned int i;

	current = *head;
	if (*head == NULL || index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		current = current->next;
		if (current == NULL)
		{
			return (-1);
		}
	}
	next_node = current->next;
	current->prev->next = next_node;
	if (next_node != NULL)
	{
		next_node->prev = current->prev;
	}
	free(current);
	return (1);
}
