#include "lists.h"
size_t free_listint_safe(listint_t **h)
{
  size_t nodes = 0;
  listint_t *current = *h;

  if (h == NULL || *h == NULL) {
    return nodes;
  }

  while (current != NULL) {
    nodes++;
    free_list(current);
    current = current->next;
  }

  *h = NULL;

  return nodes;
}

void free_list(listint_t *head)
{
  if (head == NULL) {
    return;
  }

  free_list(head->next);
  free(head);
}

