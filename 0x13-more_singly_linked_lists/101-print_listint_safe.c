#include "lists.h"
#include <stdio.h>

/**
 * free_listptr - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listptr(listptr_t **head)
{
	listptr_t *current = *head;
	listptr_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
/**
 * print_listint_safe - A function that prints the elementsin a  list
 * @head: A pointer to listint_t structure
 * Return: The number of nodes. Exits with 98 on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listptr_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listptr_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", new->p, head->n);
				free_listptr(&hptr);
				return (nodes);
			}
		}

		printf("[%p] %d\n", new->p, head->n);
		head = head->next;
		nodes++;
	}

	free_listptr(&hptr);
	return (nodes);
}
