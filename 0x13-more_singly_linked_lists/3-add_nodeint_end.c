#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node to the end of list
 * @head: A pointer to list structure
 * @n: An integer data to put into the new node
 * Return: The address of the new element, or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *tmp;

	p = *head;
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
		tmp->n = n;
		tmp->next = NULL;
		*head = tmp;
	}
	else
	{
	while (p->next != NULL)
		p = p->next;
	p->next = tmp;
	}
	return (tmp);
}

