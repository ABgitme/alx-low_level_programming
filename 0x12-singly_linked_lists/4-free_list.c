#include "lists.h"

/**
 * free_list - frees all elements in a linked list
 * @head: pointer to head element of list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}

