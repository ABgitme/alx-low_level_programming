#include "lists.h"
#include <stdio.h>

/**
 * loop_listint_size - count number of unique nodes in a loop
 * @head: A pointer to listint_t structure
 * Return: The number of unique nodes. return with 0 on no loop list
 */

size_t loop_listint_size(const listint_t *head)
{
const listint_t *first, *second;
size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	first = head->next;
	second = (head->next)->next;
	while (second != NULL)
	{
	if (first == second)
	{
	first = head;
	while (first != second)
	{
		nodes++;
		first = first->next;
		second = second->next;
	}
	while (first != second)
	{
		nodes++;
		first = first->next;
	}
	return (nodes);
	}
	first = first->next;
	second = (second->next)->next;
}
	return (0);
}
/**
 * print_listint_safe - A function that prints the elementsin a  list
 * @head: A pointer to listint_t structure
 * Return: The number of nodes. Exits with 98 on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, ref = 0;

	nodes = loop_listint_size(head);
	if (nodes == 0)
	{
	for (; head != NULL; nodes++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	}
	else
	{
		for (; ref < nodes - 1; ref++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
