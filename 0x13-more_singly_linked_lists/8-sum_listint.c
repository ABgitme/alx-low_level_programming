#include "lists.h"

/**
 * sum_listint - A function that sums values from listint_t
 * @head: A pointer listint_t structure
 * Return: The sum of all the data n from list
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	else
		return (head->n + sum_listint(head->next));
}
