#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a list
 * and returns the head node's data n.
 * @head: A pointer to listint_t structure.
 * Return: The head node's datafrom deleted element
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int val;
	
	if (*head == NULL || head == NULL)
		return (0);
	current = *head;
	val = current->n;
	*head = current->next;
	free(current);
	return (val);
}
