#include "lists.h"

/**
 * free_listint2 - A function that frees a list and sets head to NULL
 * @head: A pointer to listint_t structure
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
