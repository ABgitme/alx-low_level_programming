#include "lists.h"
size_t free_listint_safe(listint_t **h)
{
	size_t nodes;
	listint_t *current;
	listint_t *next;
  /*Check for null pointers.*/
	if (h == NULL || *h == NULL)
		return (0);
  /*Initialize a counter for the number of nodes freed.*/
	nodes = 0;
  /*Set a pointer to the current node.*/
	current = *h;
  /*Iterate over the linked list, freeing each node.*/
	while (current != NULL)
	{
    /*Increment the counter for the number of nodes freed.*/
		nodes++;
    /*Free the current node.*/
		next = current->next;
		free(current);
    /*Move to the next node.*/
		current = next;
	}
  /*Set the head pointer to null.*/
	*h = NULL;
	/*Return the number of nodes freed.*/
	return (nodes);
}
