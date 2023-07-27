#include "lists.h"
#include <string.h>
/**
 * add_node - A function that adds a node to the head of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: pointer to string that adds as node
 * Return: pointer to new head of list, NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int length = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	while (str[length])
		length++;

	newnode->len = length;
	newnode->str = strdup(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
