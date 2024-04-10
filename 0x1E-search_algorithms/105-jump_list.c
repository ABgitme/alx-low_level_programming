#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list
 * of integers using the Jump search algorithm.
 *
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 * Return: A pointer to the first node where value is located.
 *
 * This function searches for a value in a sorted list
 * of integers using the Jump search algorithm.
 * It uses the square root of the size
 * of the list as the jump step.
 * If value is not present in the list
 * or if the list is NULL, it returns NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_size, i;
	listint_t *left = list, *right = list;

	if (list == NULL || size == 0)
		return (NULL);
	jump_size = sqrt(size);
	while (right->next && right->index + jump_size < size && right->n < value)
	{
		left = right;
		for (i = 0; i < jump_size && right->next; i++)
			right = right->next;
		printf("Value checked at index [%lu] = [%d]\n", right->index, right->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			left->index, right->index);
	while (left && left->index <= right->index && left->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", left->index, left->n);
		if (left->n == value)
			return (left);
		if (left->next == NULL || left->next->index > right->index)
			break;
		left = left->next;
	}
	return (NULL);
}
