#include "lists.h"

/**
 * add_node_end - A function that adds a node to the end of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: string to add as node
 * Return: pointer to new element of list, NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail;
	unsigned int length = 0;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	while (str[length])
		length++;
	new_node->len = length;
	new_node->str = strdup(str);
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		tail = *head;
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = new_node;
	}
	return (new_node);
}
