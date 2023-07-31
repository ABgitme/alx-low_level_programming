#include "lists.h"
#include <string.h>

/**
 * add_nodeint - A function that adds a new nod at the begining of a list
 * @head: A pointer to list_t structure
 * @n: An integer data to put into the new node
 * Return: the address of the new element, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = *head;
	*head = malloc(sizeof(listint_t));
	(*head)->n = n;
	(*head)->next = p;
	if (*head != NULL)
		return (*head);
	else
		return (NULL);
}
