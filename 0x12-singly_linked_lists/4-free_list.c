#include "lists.h"

/**
* free_list - frees all elements in a linked list
* @head: pointer to head element of list
* Return: Nothing
*/

void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}

	free_list(head->next);
	free(head->str);
	free(head);
}

