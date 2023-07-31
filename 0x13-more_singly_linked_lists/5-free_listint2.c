#include "lists.h"

/**
 * free_listint2 - A function that frees a list and sets head to NULL
 * @head: A pointer to listint_t structure
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		current = *head;
		(*head) = (*head)->next;
		free(current);
	}
	*head = NULL;
}
